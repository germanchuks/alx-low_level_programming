#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Array to search.
 * @size: Integer size of the array
 * @cmp: Pointer to the function used to compare valuex.
 *
 * Return: Index of the first element if integer is found. -1 if otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;
	int arr_cmp;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	while (index < size)
	{
		arr_cmp = cmp(array[index]);
		if (arr_cmp != 0)
			return (index);
		index++;
	}
	return (-1);
}

#include "search_algos.h"

/**
 * binary_search_recursive - helper function to searches for a value in a
 * sorted array of integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if array
 * is not present or is NULL.
 */
int binary_search_recursive(int array[], size_t size, int value)
{
	size_t mid = size / 2;
	size_t index = 0;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array: ");
	while (index < size)
	{
		if (index < size - 1)
			printf("%d, ", array[index]);
		else
			printf("%d\n", array[index]);
		index++;
	}

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (binary_search_recursive(array, mid + 1, value));
		return ((int)mid);
	}

	if (value < array[mid])
		return (binary_search_recursive(array, mid + 1, value));
	mid++;
	return (binary_search_recursive(array + mid, size - mid, value) + mid);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if array
 * is not present or is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index = binary_search_recursive(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);
	return (index);
}

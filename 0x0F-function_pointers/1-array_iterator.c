#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element
 * of an array.
 * @array: Array
 * @size: Integer size of the array
 * @action: Pointer to the function to be executed on array elements.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (action == NULL || array == NULL)
		return;
	while (index < size)
	{
		action(array[index]);
		index++;
	}
}

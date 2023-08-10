#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Allocates memory for an array using malloc
 * @min: Minimum range value
 * @max: Maximum range value
 *
 * Return: Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *allocated_array;
	int size;
	int i = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	allocated_array = calloc(size, sizeof(int));

	if (allocated_array == NULL)
		return (NULL);

	while (i < size)
	{
		allocated_array[i] = min + i;
		i++;
	}

	return (allocated_array);
}

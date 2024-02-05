#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if array
 * is not present or is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t block_size = sqrt(size);
	size_t left = 0;
	size_t right = block_size;
	size_t index;

	if (!array)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", left, array[left]);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += block_size;
	}

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	index = left;
	while (index < size && index <= right)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}

	return (-1);
}

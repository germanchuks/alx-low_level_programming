#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if array
 * is not present or is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index;
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		index = left;

		printf("Searching in array: ");
		while (index <= right)
		{
			printf("%d", array[index]);
			if (index < right)
				printf(", ");
			index++;
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

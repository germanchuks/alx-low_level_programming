#include "search_algos.h"

/**
 * binary_search_recursive - helper function to searches for a value in a
 * sorted array of integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @left: Start location to search in.
 * @right: End location to search in.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if array
 * is not present or is NULL.
 */
int binary_search_recursive(int array[], int left, int right, int value)
{
	if (left <= right)
	{
		int mid = left + (right - left) / 2;
		int index = left;

		printf("Searching in array: ");
		while (index <= right)
		{
			if (index < right)
				printf("%d, ", array[index]);
			else
				printf("%d\n", array[index]);
			index++;
		}

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_search_recursive(array, left, mid - 1, value));
		else
			return (binary_search_recursive(array, mid + 1, right, value));
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if array
 * is not present or is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t range = 1;
	size_t left, right;

	if (!array)
		return (-1);

	while (range < size && array[range] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", range, array[range]);
		range *= 2;
	}

	left = range / 2;
	right = (range < size) ? range : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	return (binary_search_recursive(array, left, right, value));
}

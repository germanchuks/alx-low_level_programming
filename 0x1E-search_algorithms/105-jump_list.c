#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in list
 * @value: Value to search in
 * Return: Pointer to the first node where value is located, or NULL
 * if value is not present in head or head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev;
	size_t index, jump_step;

	if (!list || size == 0)
		return (NULL);

	jump_step = (size_t)sqrt((double)size);
	index = 0;

	while (index < size && list->next && list->n < value)
	{
		prev = list;
		index += jump_step;

		while (list->next && list->index < index)
			list = list->next;

		if (!(list->next) && index != list->index)
			index = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
	}

	printf("Value found between indexes [%d] and [%d]\n",
		   (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n",
			   (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}

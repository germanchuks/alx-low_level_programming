#include "lists.h"

/**
 * list_len - Prints the number of elements in a linked list
 * @h: Pointer to singly linked list number of elements would be printed.
 *
 * Return: Number of elements counted
 *
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			count++;
		}
		h = h->next;
	}
	return (count);
}

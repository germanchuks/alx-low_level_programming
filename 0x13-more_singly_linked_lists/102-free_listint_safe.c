#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely, even with loops.
 * @head: A pointer to the pointer to the head of the list.
 *
 * Return: Number of nodes freed.
 */
size_t free_listint_safe(listint_t **head)
{
	int addr_diff;
	listint_t *temp;
	size_t freed_count = 0;

	if (head == NULL || *head == NULL)
		return (0);

	while (*head != NULL)
	{
		addr_diff = *head - (*head)->next;
		if (addr_diff > 0)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			freed_count++;
		}
		else
		{
			free(*head);
			*head = NULL;
			freed_count++;
			break;
		}
	}

	*head = NULL;

	return (freed_count);
}

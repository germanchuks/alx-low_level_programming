#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a
 * dlistint_t linked list.
 * @head: Double pointer to first node of dlistint_t list.
 * @index: Index of the list where new node should be deleted, starting from 0.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (!temp)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	while (index > 0 && temp)
	{
		temp = temp->next;
		index--;
	}

	if (!temp)
		return (-1);

	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}

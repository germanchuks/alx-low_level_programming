#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list, and sets the head to NULL.
 * @head: Double Pointer to head of the list.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	*head = NULL;
}

#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list, and sets the head to NULL.
 * @head: Double Pointer to head of the list.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *temp;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}

	*head = NULL;
}

#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Double Pointer to head of the list.
 *
 * Return: Head node data, or 0 if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (*head == NULL)
		return (0);

	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}

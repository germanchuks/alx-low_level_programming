#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Double pointer to head of the list.
 * @idx: Index of the list where the new node should be added, starting from 0.
 * @n: Value to be assigned to new node.
 *
 * Return: Address of new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *current = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = current->next;
	current->next = newnode;

	return (newnode);

}

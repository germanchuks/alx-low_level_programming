#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to list to be freed
 *
 * Return: Nothing
 *
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}

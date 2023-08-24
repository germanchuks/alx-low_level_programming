#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to list
 * @str: String to add to new node.
 *
 * Return: The address of the new element, NULL if it fails
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int length = 0;

	while (str[length])
		length++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = length;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}

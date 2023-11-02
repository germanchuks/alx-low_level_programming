#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The pointer to the hash table.
 * @key: The key for the element.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *new_node;
	unsigned long int hash_index;
	char *new_value, *new_key;

	if (!ht || !key || !*key || !value)
		return (0);
	new_value = strdup(value);
	if (!new_value)
		return (0);
	hash_index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[hash_index];

	while (item)
	{
		if (!strcmp(key, item->key))
		{
			free(item->value);
			item->value = new_value;
			return (1);
		}
		item = item->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));

	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}

	new_key = strdup(key);
	if (!new_key)
		return (0);

	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = ht->array[hash_index];
	ht->array[hash_index] = new_node;

	return (1);
}

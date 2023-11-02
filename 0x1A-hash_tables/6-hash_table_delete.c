#include "hash_tables.h"

/**
 * free_item - Frees memory occupied by a hash table item.
 * @item: A pointer to the hash node to be freed.
 *
 * Return: Nothing
 */
void free_item(hash_node_t *item)
{

	free(item->key);
	free(item->value);
	free(item);
}

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The pointer to hash table.
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *item, *next;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			next = item->next;
			free_item(item);
			item = next;
		}
	}

	free(ht->array);
	free(ht);
}

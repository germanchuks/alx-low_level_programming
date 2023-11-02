#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The pointer to the hash table.
 * @key: The key to look up.
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *bucket;
	unsigned long int hash_index;

	if (!ht || !key || !*key)
		return (NULL);

	hash_index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[hash_index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}

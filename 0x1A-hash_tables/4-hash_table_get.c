#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table to look into.
 * @key: key value which is been looked.
 * Return: the value associated with the element, or NULL if key couldn’t
 * be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cursor;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);
	for (cursor = ht->array[index]; cursor != NULL; cursor = cursor->next)
	{
		if (strcmp(key, cursor->key) == 0)
			return (cursor->value);
	}
	return (NULL);
}

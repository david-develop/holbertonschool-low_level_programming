#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table to add or update the key/value
 * @key: key value to add or update.
 * @value: value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *temp;
	hash_node_t *cursor;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (cursor = ht->array[index]; cursor != NULL; cursor = cursor->next)
	{
		if (strcmp(cursor->key, key) == 0)
		{
			free(cursor->value);
			cursor->value = strdup(value);
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (ht->array[index] == NULL)
		new_node->next = NULL;
	else
	{
		temp = ht->array[index];
		new_node->next = temp;
	}
	ht->array[index] = new_node;
	return (1);
}

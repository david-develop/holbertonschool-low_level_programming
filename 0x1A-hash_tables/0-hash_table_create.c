#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return: pointer to the newly created hash table or NULL if something go
 * wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	if (size == 0)
		return (NULL);
	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);
	new_ht->size = size;
	new_ht->array = calloc(size, sizeof(hash_node_t *));
	if (new_ht->array == NULL)
		return (NULL);
	return (new_ht);
}

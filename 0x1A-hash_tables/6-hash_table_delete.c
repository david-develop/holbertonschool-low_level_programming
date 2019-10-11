#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table that will be deleted.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cursor;
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		for (cursor = ht->array[i]; cursor != NULL;)
		{
			temp = cursor->next;
			free(cursor->key);
			free(cursor->value);
			free(cursor);
			cursor = temp;
		}
	}
	free(ht->array);
	free(ht);
}

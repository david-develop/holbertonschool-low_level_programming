#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table that will be printed.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cursor;
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		for (cursor = ht->array[i]; cursor != NULL; cursor = cursor->next)
		{
			if (flag != 0)
				printf(", ");
			printf("\'%s\': \'%s\'", cursor->key, cursor->value);
		}
		flag = 1;
	}
	printf("}\n");
}

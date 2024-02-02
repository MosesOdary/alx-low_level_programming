#include "hash_tables.h"


/**
* hash_table_print - prints a hashtable
*
* @ht: hashTable
*
*/
void hash_table_print(const hash_table_t *ht)
{
	uint64_t i = 0;
	uint64_t j = 0;
	hash_node_t *temp = NULL;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (j)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);

			temp = temp->next;

			j++;
		}
	}

	printf("}\n");
}

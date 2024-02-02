#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
*
* @ht: pointer to hash table
*
*/
void hash_table_delete(hash_table_t *ht)
{
	uint32_t i = 0;
	hash_node_t *this;
	hash_node_t *tmp;

	if (!ht)
		return;

	for (; i < ht->size; i++)
	{
		this = ht->array[i];
		while (this)
		{
			tmp = this;
			this = this->next;

			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
}


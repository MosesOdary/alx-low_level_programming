#include "hash_tables.h"



/**
* hash_table_get - get value of key in hashtable
*
* @ht: hashtable to search in
* @key: key to search for
*
* Return: value else NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	uint64_t i;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);

	temp = ht->array[i];

	while (temp)
	{
		if (temp->key)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
		}
		temp = temp->next;
	}

	return (NULL);
}

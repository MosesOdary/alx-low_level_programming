#include "hash_tables.h"


/**
* hash_table_set - adds an element to the hash table.
*
* @ht: hash table to add to
* @key: key do add
* @value: value to add
*
* Return: 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	uint64_t i;
	hash_node_t *new = NULL;
	hash_node_t *tmp = NULL;


	if (!ht || !key || *key == '\0' || !value)
		return (-1);

	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];

	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (-1);
			return (0);
		}
		tmp = tmp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (-1);

	new->key = strdup(key);
	new->value = strdup(value);

	if (!new->value)
	{
		free(new);
		return (-1);
	}
	new->next = ht->array[i];
	ht->array[i] = new;
	return (0);
}

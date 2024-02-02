#include "hash_tables.h"


/**
 * hash_table_set - Add or update an element in a hash table.
 *
 * @ht: The hash table
 * @key: Key to add
 * @value: The value associated with key.
 *
 * Return: Upon failure, 0 otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	char *valueCopy = NULL;
	uint64_t i = 0;
	uint64_t j = 0;

	if (!(ht) || !(key) || *key == '\0' || !(value))
		return (0);

	valueCopy = strdup(value);

	if (valueCopy == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = valueCopy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(valueCopy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = valueCopy;
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);
}
#include "hash_tables.h"


/**
* key_index - Generate index index
*
* @key: key to assign to the index
* @size: size of table
*
* Return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

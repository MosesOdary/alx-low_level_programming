#include "main.h"

/**
* malloc_checked - allocates memory (b bytes) using malloc
*
* @b: bytes to be allocated
*
* Return: pointer to memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}

	return (ptr);
}

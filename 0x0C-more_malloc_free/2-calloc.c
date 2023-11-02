#include "main.h"

/**
* _calloc - allocates memory for an array, using malloc.
*
* @nmemb: number of array elements
* @size: size of each array element
*
* Return: pointer to memory allocated
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory = NULL;
	uint16_t i = 0;

	if (!nmemb || !size)
		return (NULL);

	memory = malloc(nmemb * size);

	if (!memory)
	{
		free(memory);
		return (NULL);
	}

	for (; i < (nmemb * size); i++)
		memory[i] = 0;

	return (memory);
}

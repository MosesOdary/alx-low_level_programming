#include "main.h"

/**
* _realloc - function that reallocates a  block of memory using malloc
*
* @ptr: pointer to the previously allocated  memory block
* @old_size: size of ptr
* @new_size: new memory size
*
* Return: pointer to new memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr = NULL;
	uint8_t *temp = ptr, *temp2;
	uint16_t i = 0;

	if (old_size == new_size)
		return (ptr);

	if (!ptr)
	{
		newPtr = malloc(new_size);

		if (!newPtr)
			return (NULL);

		return (newPtr);
	}

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	newPtr = malloc(sizeof(*temp) * new_size);

	if (!newPtr)
	{
		free(ptr);
		return (NULL);
	}

	temp2 = newPtr;
	
	for (i = 0; i < new_size && i < old_size; i++)
		temp2[i] = temp[i];

	free(ptr);

	return (newPtr);
}

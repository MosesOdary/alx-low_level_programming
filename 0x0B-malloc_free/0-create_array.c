#include "main.h"

/**
* create_array - create a char pointer and initializes it with a specific char.
*
* @size: array size
* @c: character to initialize
*
* Return: pointer to array (success) or NULL (failure)
*/

char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	uint16_t i = 0;

	if (size == 0)
		return ('\0');

	ptr = malloc(sizeof(char) * size);

	if (!ptr)
		return ('\0');
	else
	{
		for (; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
}

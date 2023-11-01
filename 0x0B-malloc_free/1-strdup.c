#include "main.h"

/**
* _strdup -  returns a copy of the string argument str.
*
* @str: pointer to string being copied
*
* Return: pointer to copied string (success) or NULL (failure)
*/

char *_strdup(char *str)
{
	char *copy;
	uint16_t i = 0;
	uint16_t length = 0;

	if (!str)
		return (NULL);

	for (; str[i]; i++)
		length++;
	
	copy = malloc(sizeof(char) * (length + 1));

	if (!copy)
		return (NULL);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];

	copy[length] = '\0';

	return (copy);
}

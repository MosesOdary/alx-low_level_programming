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
	int index, len;

	if (!str)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	
	copy = malloc(sizeof(char) * (len + 1));

	if (!copy)
		return (NULL);

	for (index = 0; str[index]; index++)
		copy[index] = str[index];

	copy[len] = '\0';

	return (copy);
}

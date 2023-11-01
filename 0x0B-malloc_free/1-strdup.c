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
	uint16_t length = strlen(str);
	uint8_t i = 0;
	char *copy = NULL;

	if (str == NULL)
		return (NULL);

	copy = malloc(sizeof(char) * (length + 1));

	if (!copy)
		return (NULL);

	for (; i < length; i++)
		copy[i] = str[i];

	return (copy);
}

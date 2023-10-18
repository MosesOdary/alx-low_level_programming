#include "main.h"

/**
 * string_toupper - Change all lowercase letters of a string to uppercase
 *
 * @str: The string being modified
 *
 * Return: The modified string
*/


char *string_toupper(char *str)
{
	int i = 0;
	int length = strlen(str);

	for (; i < length; i++)
		if (str[i] > 90)
		{
			str[i] -= ' ';
		}

	return (str);
}


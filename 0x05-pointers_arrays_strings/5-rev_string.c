#include "main.h"

/**
 * _strlen - get a strings length
 *
 * rev_string - reverse a string
 *
 * @s: The string being worked on
 *
 * Return: void
*/

void rev_string(char *s)
{
	int i = 0;
	int stringLength = _strlen(s);
	int j = stringLength;
	char temp = ' ';

	for (; i < stringLength / 2; i++)
	{
		temp = s[i];
		s[i] = s[--j];
		s[j] = temp;
	}
}

int _strlen(char *s)
{
	const char *end = s;

	for (; *end != '\0'; ++end)
		;
	return (end - s);
}

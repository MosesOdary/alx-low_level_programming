#include "main.h"

/**
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

/**
 * _strlen - Return the length of a string
 *
 * @s: The string whose length is being checked
 *
 * Return: void
*/

int _strlen(char *s)
{
	const char *end = s;

	for (; *end != '\0'; ++end)
		;
	return (end - s);
}

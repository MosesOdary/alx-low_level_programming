#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_rev - Print string in reverse
 * _strlen - Return the length of a string
 *
 * @s: The string being worked on
 *
 * Return: void
*/

void rev_string(char* s)
{
	int i = 0;
	int stringLength = _strlen(s);
	int j = stringLength;
	char temp = ' ';
	stringLength;
	

	for (; i < stringLength / 2; i++)
	{
		temp = s[i];
		s[i] = s[--j];
		s[j] = temp;
	}
}

int _strlen(char* s)
{
	const char* end = s;

	for (; *end != '\0'; ++end)
		;
	return (end - s);
}

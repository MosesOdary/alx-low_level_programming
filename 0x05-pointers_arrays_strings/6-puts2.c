#include "main.h"

/**
 * puts2 - Print a string
 *
 * @str: The string being printed
 *
 * Return: void
*/

void puts2(char *str)
{
	int i = 0;
	int stringLength = _strlen(str);

	for (; i < stringLength; i += 2)
		_putchar(str[i]);
	_putchar('\n');
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


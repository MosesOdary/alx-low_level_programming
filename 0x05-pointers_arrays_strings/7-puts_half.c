#include "main.h"

/**
 * puts_half - Print half a string
 *
 * @str: The string being printed
 *
 * Return: void
*/

void puts_half(char *str)
{
	int stringLength = 0;
	int halfLength = 0;
	int i = 0;

	while (str[stringLength] != 0)
	{
		stringLength++;
	}

	if ((stringLength % 2) == 0)
	{
		halfLength = stringLength / 2;
		for (i = halfLength; i < stringLength; i++)
		{
			_putchar(str[i]);
		}
	}
	if ((stringLength % 2) != 0)
	{
		halfLength = ((stringLength - 1) / 2);
		for (i = halfLength; i < stringLength; i++)
		{
			_putchar(str[i]);
		}
	}
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


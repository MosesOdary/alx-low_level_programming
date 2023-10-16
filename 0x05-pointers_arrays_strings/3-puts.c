#include "main.h"

/**
 * _puts - Print string to std out followed by a new line
 *
 * @str: The string being printed
 *
 * Return: void
*/

void _puts(char *str)
{
	int i = 0;

	for (; ; i++)
	{
		if(str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);

	}
}

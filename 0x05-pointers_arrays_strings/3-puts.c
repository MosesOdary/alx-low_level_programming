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
	int i;
	for (i=0; ; i++)
	{
		if(str[i]=='\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);

	}
}

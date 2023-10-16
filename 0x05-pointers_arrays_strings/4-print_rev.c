#include "main.h"

/**
 * print_rev - Print string in reverse
 *
 * @s: The string being printed
 *
 * Return: void
*/

void print_rev(char* s)
{
	const char *end = s;
	int stringLength = 0;

	for (; *end != '\0'; ++end)
		;

	stringLength = (end - s);

	end--;
	do	{
		_putchar(*end);
		end--;
		stringLength--;
	} while (stringLength > 0);
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - Print string to std out followed by a new line
 *
 * @str: The string being printed
 *
 * Return: void
*/

void print_rev(char *s)
{
	const char *end = s;

	for ( ; *end != '\0'; ++end)
		;
	for ( ; *end != s; end--)
		_putchar(*end);
}

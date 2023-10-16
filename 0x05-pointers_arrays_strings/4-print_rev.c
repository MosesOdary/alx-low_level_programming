#include "main.h"

/**
 * print_rev - Print string in reverse
 *
 * @s: The string being printed
 *
 * Return: void
*/

void print_rev(char *s)
{
	const char *end = s;

	for ( ; *end != '\0'; ++end)
		;
	
	for ( ; *end != *s; end--)
		_putchar(*end);
}

#include "main.h"

/**
* _puts_recursion - prints string
*
* @s: string to print
*/

void _puts_recursion(char *s)
{
	do {
		_putchar(*s);
		s++;
		_puts_recursion(s);
	} while (*s);
	
	_putchar('\n');
}


#include "main.h"

/**
* _print_rev_recursion - prints string in reverse
*
* @s: pointer to first haracter in string
*/

void _print_rev_recursion(char *s)
{
	uint8_t length = strlen(s);

	while (length--)
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
}


#include "main.h"

/**
 * print_line - print a line
 * @n: The space in characters occupied by the line
 * Return: Always 0.
 */


void print_line(int n)
{
	int i = 0;

	if (n < 1)
		_putchar('\n');
	else
	{
		for (; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}



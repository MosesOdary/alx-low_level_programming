#include "main.h"

/**
 * print_binary - prints a decimal numer in base 2
 *
 * @n: unsigned long
 */

void print_binary(unsigned long int n)
{
	if (n >> 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

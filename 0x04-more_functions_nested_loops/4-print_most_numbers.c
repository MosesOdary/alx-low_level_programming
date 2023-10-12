#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 - 9 except 2 and 4
 *
 * Return: Always 0
*/

void print_most_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
			break;
		_putchar(i + '0');
	}
	_putchar('\n');
}
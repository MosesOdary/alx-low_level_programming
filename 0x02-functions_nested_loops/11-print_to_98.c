#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print from a number n to 98
 *
 * @n: the starting number
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	int i = 0;

	if (n < 98)
		for (i = n; i < 99; i++)
		{
			printf("%d, ", i);
			printf("\n");
		}

	else if (n > 98)
		for (i = n; i > 97; i--)
		{
			printf("%d, " i);
			printf("\n");
		}
	else
		printf("%d\n", 98);

	_putchar('\n');
}

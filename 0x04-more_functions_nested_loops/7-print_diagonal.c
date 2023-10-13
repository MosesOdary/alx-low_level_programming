#include "main.h"

/**
*print_diagonal - print \ n times
*
*@n: number of times to print
*/

void print_diagonal(int n)
{
	int i, j = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < (i - 1); j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

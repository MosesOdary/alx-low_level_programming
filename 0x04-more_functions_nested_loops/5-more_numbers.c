#include "main.h"

/**
 * more_numbers - print the numbers from 0 - 14 10 times
 *
 * Return: void
*/

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for (; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
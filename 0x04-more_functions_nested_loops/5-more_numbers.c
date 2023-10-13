#include "main.h"

/**
 * more_numbers - print the numbers from 0 - 14 10 times
 *
 * Return: void
*/

void more_numbers(void)
{
	int i, j, k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = '0'; j < '2'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if ((j > '0') && (k > '4'))
					break;
				if (j > '0')
					_putchar(j);

				_putchar(k);
			}
		}
	_putchar('\n');
	}
}

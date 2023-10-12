#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always zero
 */
void times_table(void)
{
	int i, j, outputChar = 0;

	for (; i < 10; i++)
	{
		_putchar('0');
		for (j = 0; j < 9; j++)
		{
			outputChar = i + (i * j);
			if (outputChar < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(outputChar + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((outputChar / 10) + '0');
				_putchar((outputChar % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

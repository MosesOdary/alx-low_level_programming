#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print all single digit numbers in base 10 using putchar
 *
 * Return: 0 - Success
 */

int main(void)
{
	int i = '0';
	int j = '1';

	for (; i <= '8'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);

				if ((i != '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

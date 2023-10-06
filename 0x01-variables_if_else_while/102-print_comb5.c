#include <stdio.h>

/**
 * main - list all possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j = 0;

	for (; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if (j != i)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');

				if (((i * 100) + j) != 9899)
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

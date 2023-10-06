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
	int i = 48;

	for (; i < 58; i++)
	{
		putchar(i);

		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

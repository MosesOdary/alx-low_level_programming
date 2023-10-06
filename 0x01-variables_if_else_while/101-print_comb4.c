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
	int k = '2';

	for (; i <= '7'; i++)
	{
		for (j = '1'; j <= '8'; j++)
		{
			for (k = '2'; k <= '9'; k++)
			{
				if ((k > j) && (j > i))
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if ((i != '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
putchar('\n');

return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print the alphabet except the letters q and e
 *
 * Return: 0 - Success
 */

int main(void)
{
	int i = 97;

	for (; i < 123; i++)
	{
		if ((i == 101) || (i == 113))
		{
			continue;
		}
		putchar(i);
	}

	putchar('\n');

	return (0);
}

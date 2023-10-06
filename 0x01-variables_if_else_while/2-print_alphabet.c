#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print the alphabet in lowercase
 *
 * Return: 0 - Success
 */

int main(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

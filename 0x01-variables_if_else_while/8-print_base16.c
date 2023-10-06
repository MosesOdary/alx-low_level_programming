#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print all base 16 single digit numbers
 *
 * Return: 0 - Success
 */

int main(void)
{
	int i = 48;

	for (; i < 58; i++)
		putchar(i);
	for (i = 97; i < 103; i++)
		putchar(i);

	putchar('\n');

	return (0);
}

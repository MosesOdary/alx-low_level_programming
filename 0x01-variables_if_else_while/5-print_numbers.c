#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print all base 10 single digit numbers
 *
 * Return: 0 - Success
 */

int main(void)
{
	int i = 0;

	for (; i < 10; i++)
		printf("%d", i);
	printf('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 - success
 */

int main(void)
{
	int i = 0;
	long int fibonacciArray[50] = {1, 2};

	for (i = 2; i < 50; i++)
		fibonacciArray[i] = fibonacciArray[i - 2] + fibonacciArray[i - 1];

	for (i = 0; i < 49; i++)
		printf("%ld, ", fibonacciArray[i]);
	printf("%ld\n", fibonacciArray[49]);

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 - success
 */

int main(void)
{
	int i = 2;
	long int sum = 0;
	long int fibonacciArray[32] = {1, 2};

	do {
		fibonacciArray[i] = fibonacciArray[i - 2] + fibonacciArray[i - 1];
		i++;
	} while (i < 32);

	for (i = 0; i < 32; i++)
		if ((fibonacciArray[i] % 2) == 0)
		{
			sum += fibonacciArray[i];
		}
	printf("%ld\n", sum);

	return (0);
}

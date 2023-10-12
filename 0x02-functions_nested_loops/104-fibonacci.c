#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Fibonacci - Returns the fibonacci of a certain number
 *
 * @number - The number whose fibonacci value is being computed
 *
 * Return: 0 - success
 */

unsigned int Fibonacci(int number);

int main(void)
{
	int i = 2;

	for (; i < 100; i++)
		printf("%d, ", Fibonacci(i));

	return (0);
}

unsigned int Fibonacci(int number)
{
	if ((number == 1) || (number == 0))
		return (number);
	else
		return (Fibonacci(number - 1) + Fibonacci(number - 2));
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description - Prints the last digit of a randomly generated number n
 *
 * Return: 0 - Success
 */
int main(void)
{
	int n = 0;
	int last = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if ((last < 6) && (last != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	else
		printf("Last digit of %d is %d and is 0\n", n, last);

	return (0);
}

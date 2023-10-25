#include "main.h"

/**
* isprime - determines if n is prime
*
* @i: divisor
* @n: integer
*
* Return: 1 if prime 0 otherwise
*/

int isprime(int i, int n)
{
	if (n < 2)
		return (0);
	else if	(i > (n / 2))
		return (1);
	else if ((n % i) == 0)
		return (0);
	else
		return (isprime(i++, n));
}

/**
* is_prime_number - calls isprime
*
* @n: integer
*
* Return: 1 if prime 0 otherwise
*/

int is_prime_number(int n)
{
	return (isprime(2, n));
}

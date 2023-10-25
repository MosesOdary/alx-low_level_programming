#include "main.h"


/**
*factorial - calculates factorail of a number
*
*@n:integer factorial to be calculated
*
*Return: factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (1);
	else
		return (n * factorial(n - 1));
}


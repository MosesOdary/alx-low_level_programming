#include "main.h"

/**
* sqrtfnc - returns root of n
*
* @i: integer
* @n:square
*
* Return: root of n
*/

int sqrtfnc(int i, int n)
{
	if ((i * i) == n)
		return (i);
	else if (i > (n / 2))
		return (-1);
	else
		return (sqrtfnc(i++, n));
}


/**
* _sqrt_recursion - Calls sqrtfnc
*
* @n: integer
*
* Return: root of n
*/

int _sqrt_recursion(int n)
{
	return (sqrtfnc(1, n));
}


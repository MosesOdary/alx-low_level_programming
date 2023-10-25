#include "main.h"

/**
* _pow_recursion - returns x raised to y
*
* @x: number
* @y: power to raise x to
*
* Return: multiplication result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y < 1)
		return (1);
	else
		return (x * _pow_recursion(x, y--));
}

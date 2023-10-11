#include "main.h"

/**
 * _abs - compute the absolute value of n integer
 * @num: The number to be computed
 * Return: The new absolute value
 */

int _abs(int num)
{
	if (num < 0)
		num = -num;
	return (num);
}

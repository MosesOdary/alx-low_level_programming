#include "main.h"

/**
* get_bit - returns the value of a bit at index
*
* @n: input to search through
* @index: index to get value at
*
* Return: value of bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 || index >= 64)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

#include "main.h"

/**
*flip_bits - returns the number of bits to flip to get to another number
*
* @n: integer
* @m: integer
*
* Return: number of bits you would need to flip else -1
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int different;
	unsigned int count = 0;

	different = n ^ m;

	while (different)
	{
		count += different & 1;
		different >>= 1;
	}

	return (count);
}

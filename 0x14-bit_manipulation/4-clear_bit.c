#include "main.h"

/**
* clear_bit - unsets a bit
*
* @n: pointer to integer input
* @index: index to set
*
* Return: 1 - success
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}

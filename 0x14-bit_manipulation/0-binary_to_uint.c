#include "main.h"

/**
*_pow - calculates a numer raised to a certain radix
*
*@base: integer to raise
*@radix: radix to raise
*
*Return: Integer raised to a radix
*/
unsigned int _pow(unsigned int base, int radix)
{
	unsigned int output = 1;

	if (radix == 0)
		return (1);

	while (radix > 0)
	{
		output *= base;
		radix--;
	}

	return (output);
}

/**
*binary_to_uint - converts base 2 number to an unsigned int
*
*@b: binary string
*
*Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	uint32_t total = 0;
	uint16_t i = 0;
	uint32_t length, radix = 0;

	if (!b)
		return (0);

	/* Check if string is valid base 2 string */
	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	while (--length)
	{
		if (b[length] == '1')
		{
			i = _pow(2, radix);
			total += i;
		}
		radix++;
	}

	return (total);
}

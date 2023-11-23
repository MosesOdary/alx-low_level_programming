#include "main.h"


bool IsValidBinaryString(const char *binString);

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @binString: the binary number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *binString)
{
	uint32_t uintResult = 0;
	uint8_t radix = 1;
	int16_t stringLength =  strlen(binString);

	if (!IsValidBinaryString(binString))
		return (0);

	while (stringLength--)
	{
		uintResult += ((binString[stringLength - 1] - '0') * radix);
		radix *= 2;
	}

	return (uintResult);
}

/**
 * IsValidBinaryString - checks if string has only radix 2 digits
 *
 * @binString: string to check
 *
 * Return: true if string is valid
 */
bool IsValidBinaryString(const char *binString)
{
	if (!binString)
		return (false);

	for (; *binString; binString++)
	{
		if ((*binString != '1') && (*binString != '0'))
			return (-1);
	}

	return (true);
}


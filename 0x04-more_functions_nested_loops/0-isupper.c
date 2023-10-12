#include "main.h"

/**
 * _isupper - Function that checks for uppercase character
 *
 * @c: The character being tested
 *
 * Return: 1 if uppercase and 0 otherwise
*/

int _isupper(int c)
{
	if (c > 96)
		return (0);
	else
		return (1);
}

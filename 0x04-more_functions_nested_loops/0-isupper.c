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
	if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}

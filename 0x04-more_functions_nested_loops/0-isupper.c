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
	if ((c > 96) && (c < 123))
		return (0);
	else if ((c > 64) && (c < 91))
		return (1);
}

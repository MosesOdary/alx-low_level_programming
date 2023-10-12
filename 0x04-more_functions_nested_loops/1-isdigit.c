#include "main.h"

/**
 * _isupper - checks for a digit
 *
 * @c: The character being tested
 *
 * Return: 1 if c is a digit and 0 otherwise
*/

int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	else
		return (0);
}

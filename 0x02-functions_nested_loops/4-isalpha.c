#include "main.h"

/**
 * _isalpha - returns 1 if a character is an alphabet letter and zero otherwise
 * @c: The characetr being tested
 * Return: Always 0
 */

int _isalpha(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
		return (1);
	else
		return (0);
}

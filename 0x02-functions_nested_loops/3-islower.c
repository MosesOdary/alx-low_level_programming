#include "main.h"

/**
 * _islower - prints 1 if a character is lowercase and zero otherwise
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if (c < 97)
		return 0;
	else
		return 1;
}

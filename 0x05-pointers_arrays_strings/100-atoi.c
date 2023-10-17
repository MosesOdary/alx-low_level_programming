#include "main.h"

/**
 * _atoi - Convert a string to int
 *
 * @s: string being converted to an int
 *
 * Return: void
*/

int _atoi(char *s)
{
	unsigned int i = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if ((*s >= '0') && (*s <= '9'))
		{
			i = (i * 10) + (*s - '0');
		}
		else if (i > 0)
			break;
		s++;
	}

	return (i * sign);
}



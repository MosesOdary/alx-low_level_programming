#include "main.h"

/**
* get_endianness - Determines if arch is big endian or little endian
*
* Return: 0 if big endian
*/

int get_endianness(void)
{
	int num = 1;
	char *c;

	c = (char *)&num;

	if (*c == 0)
		return (0);

	return (1);
}

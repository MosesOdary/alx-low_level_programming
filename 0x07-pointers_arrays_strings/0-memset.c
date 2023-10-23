#include "main.h"

/**
* _memset - fills first n bytes of memory area with the constant byte b
*
* @s: buffer to be filled
* @b: bytes used to fill
* @n: number of bytes to fill
*
* Return: s
*/


char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


#include "main.h"

/**
 * _strncat - concatenates two strings up to n characters
 *
 * @dest: The destination to copy to
 * @src: The string to copy from
 * @n: The number of bytes to copy from src
 *
 * Return: The concatenated string
*/


char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;
	int destLength = strlen(dest);

	j = destLength;

	for (i = 0; i < n; i++)
	{
		dest[j++] = src[i];
	}

	dest[j] = '\0';

	return (dest);
}



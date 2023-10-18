#include "main.h"

/**
 * _strncpy - Copy n characters to dest from src
 *
 * @dest: The destination for copying to
 * @src: The src string to cpy from
 * @n: The number of characters to copy
 *
 * Return: The new string
*/


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int destLength = strlen(dest);
	int srcLength = strlen(src);

	for (; i < n && i < srcLength; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}


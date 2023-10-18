#include <string.h>
#include "main.h"

/**
 * _strcat - merge 2 stings together
 *
 * @dest: The destination string
 * @src: The source string to be appended to the destination string
 *
 * Return: The new string
*/

char *_strcat(char *dest, char *src)
{
	int i, j = 0;
	int destLength = strlen(dest);

	j = destLength;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j++] = src[i];
	}

	dest[j] = '\0';

	return (dest);
}



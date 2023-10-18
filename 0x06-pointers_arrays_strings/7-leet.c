#include "main.h"

/**
 * leet - Encode a string into 1337
 *
 * @str: The string to encode
 *
 * Return: Encoded string
*/

char *leet(char *str)
{
	const unsigned char arraySize = 5;
	char *cp = str;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i = 0;

	while (*str)
	{
		for (; i < arraySize; i++)
		{
			if (*str == key[i] || *str == key[i] + ' ')
			{
				*str = '0' + value[i];
			}
		}
		str++;
	}

	return (cp);
}


#include "main.h"

/**
* str_concat - function that concatenates two strings.
*
* @s1: string to append to
* @s2: string to be appended
*
* Return: combined string (success)
*/

char *str_concat(char *s1, char *s2)
{
	char *newString = NULL;
	uint16_t s1Length = 0;
	uint16_t s2Length = 0;
	uint8_t i = 0, j = 0;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	for (; *(s1 + s1Length); s1Length++)
	{
	}
	for (; *(s2 + s2Length); s2Length++)
	{
	}

	newString = malloc(sizeof(char) * (s1Length + s2Length + 1));

	if (!newString)
		return (NULL);
	for (; i < (s1Length + s2Length); i++)
	{
		if (i < s1Length)
			newString[i] = s1[i];

		else
			newString[i] = s2[j++];
	}

	newString[i] = '\0';

	return (newString);
}

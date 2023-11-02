#include "main.h"

/**
* string_nconcat - concatenates two strings.
*
* @s1: first string
* @s2: second string
* @n: number of characters from s2 to append to s1
*
* Return: concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	uint16_t s1Length = strlen(s1);
	uint16_t s2Length = strlen(s2);
	uint8_t i = 0, j = 0;
	char *newString = NULL;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	if (n >= s2Length)
		n = s2Length;

	newString = malloc(sizeof(char) * (s1Length + n + 1));

	if (!newString)
	{
		free(newString);
		return (NULL);
	}

	for (; i < (s1Length + n); i++)
	{
		if (i >= s1Length)
			newString[i] = s2[j++];

		else if (i < s1Length)
			newString[i] = s1[i];
	}

	newString[i] = '\0';
	return (newString);
}

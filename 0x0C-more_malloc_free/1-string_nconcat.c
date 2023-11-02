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
	char *concat;
	uint16_t length = n;
	uint16_t i = 0;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	for (; s1[i]; i++)
		length++;

	concat = malloc(sizeof(char) * (length + 1));

	if (!concat)
		return (NULL);

	length = 0;

	for (i = 0; s1[i]; i++)
		concat[length++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[length++] = s2[i];

	concat[length] = '\0';

	return (concat);
}

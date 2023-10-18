#include "main.h"

/**
 * _strcmp - Compare 2 strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The result of the comparison
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;
	unsigned int true = 1;

	while (true)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			result = s1[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			result = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (result);
}


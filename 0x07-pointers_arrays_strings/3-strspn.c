#include "main.h"
#include <stdbool.h>

/**
* _strspn - return the length of a prefix substring.
*
* @s: string the function is executed on
* @accept: acceptable characters
*
* Return: length of acceptable string
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	bool proceed = false;
	int count = 0;

	while (s[i] != '\0' && s[i] != ' ')
	{
		proceed = true;
		for (; accept[j]; j++)
			if (s[i] == accept[j])
			{
				proceed = false;
				count++;
				break;
			}

		if (proceed)
			break;

		i++;
	}
	return (count);
}

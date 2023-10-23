#include "main.h"

/**
* _strchr - that locate a char in a string
*
* @s: string to search
* @c:character to search for
*
* Return: s
*/

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
		{
			s = '\0';
			break;
		}
		s++;
	}
	return (s);
}


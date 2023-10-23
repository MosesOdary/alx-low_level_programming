#include "main.h"
#include <stdbool.h>

/**
* _strpbrk - locates the first occurrence in the string s of any of the bytes in the string accept
*
* @s: string to search
* @accept: string to search in
*
* Return: pointer to the byte in s that matches one of the bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	bool cont = true;

	while (*s)
	{
		i = 0;
		while (*(accept + i))
		{
			if (*s == *(accept + i))
			{
				cont = false;
				break;
			}
			i++;
		}
		if (!cont)
			break;
		s++;
	}

	if (*s != '\0')
		return (s);
	
	else
		return ('\0');
}

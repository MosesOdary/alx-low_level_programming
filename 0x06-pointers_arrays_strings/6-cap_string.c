#include "main.h"

/**
 * cap_string - capitalize word of a string seprated by
 * space, tab, newline, ,, ;, ., !, ?, ", (, ), {, and }
 *
 * @str: The string being capitalized
 *
 * Return: Modified string
*/

char *cap_string(char *str)
{
	char *bufferStart = str;
	char prev  = '0';

	while (*str != '\0')
	{
		prev = *(str - 1);
		if (
			prev == ' ' || prev == '\t' || prev == '\n'
			|| prev == ',' || (prev == ';') || (prev == '.')
			|| (prev == '!') || prev == '?' || prev == '\"'
			|| prev == '(' || prev == ')' || prev == '{' || prev == '}'
			)
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str -= ' ';
			}
		}

		str++;
	}

	str = bufferStart;

	return (str);
}




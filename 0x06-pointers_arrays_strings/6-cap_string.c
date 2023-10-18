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
	int i = 0;
	int length = strlen(str);
	char prev  = '0';

	for (; i < length; i++)
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

	return (str);
}



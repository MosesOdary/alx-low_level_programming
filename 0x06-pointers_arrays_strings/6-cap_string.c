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
	char prev  = '0';

	while (str++)
	{
		prev = *(str--);
		if ((prev == ' ') || (prev == '\t') || (prev == '\n') ||
		(prev == ',') || (prev == ';') || (prev == '.') || (prev == '!')
		|| (prev == '?') || (prev == '\"') || (prev == '(') ||
		(prev == ')') || (prev == '{') || (prev == '}'))
			*str -= ' ';
	}

	return (str);
}


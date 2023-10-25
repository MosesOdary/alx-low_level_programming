#include "main.h"


/**
* _strlen_recursion - get string length
*
* @s: the string
*
* Return: stirng length
*/


int _strlen_recursion(char *s)
{
	uint8_t length = 0;

	if (*s == '\0')
		return (0);
	else
		length += (_strlen_recursion(++s) + 1);

	return (length);
}


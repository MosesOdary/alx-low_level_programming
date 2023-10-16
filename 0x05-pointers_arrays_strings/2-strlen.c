#include "main.h"

/**
 * _strlen - Return the length of a string
 *
 * @s: The string whose length is beib=ng checked
 *
 * Return: void
*/

int _strlen(char *s)
{
	const char *end = s;

	for ( ; *end != '\0'; ++end)
		;
	return (end - s);
}

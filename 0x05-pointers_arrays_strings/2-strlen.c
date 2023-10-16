#include "main.h"

/**
 * _strlen - Return the length of a string
 *
 * @s: The string whose length is being checked
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

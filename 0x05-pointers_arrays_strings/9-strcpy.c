#include "main.h"

/**
 * _strcpy - Copy a string from src to dest
 *
 * @dest: destination string
 * @src: src string
 *
 * Return: void
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int stringLength = _strlen(src);

	for (; i < stringLength; i++)
	{
		dest[i] = src[i];
	}

	return dest;
}

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

	for (; *end != '\0'; ++end)
		;
	return (end - s);
}



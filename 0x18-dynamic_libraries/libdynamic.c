#include <stdbool.h>

#include "main.h"



int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (true);
	else
		return (false);
}

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z'))
		return (true);
	else
		return (false);
}

int _abs(int n)
{
	if (n < 0)
		return (-n);
	
	return (n);
}

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (true);
	else
		return (false);
}

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (true);
	else
		return (false);
}

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; s++)
		len++;

	return (len);
}

void _puts(char *s)
{
	uint16_t length = _strlen(s);

	write(1, s, length);
}

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';

	return (dest);
}

int _atoi(char *s)
{
	uint16_t num = 0;
	uint16_t i;
	uint16_t strLength = _strlen(s);
	int16_t sign = 1;

	for (i = 0; i <  strLength; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		num = num * 10 + (s[i] - 48);

		else if (num > 0)
			break;
	}

	return (num * sign);
}

char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int len_src = 0;

	for (; dest[len_dest] != '\0'; len_dest++)
		;

	for (; src[len_src] != '\0' ;)
		dest[len_dest++] = src[len_src++];

	dest[len_dest] = '\0';
	return (dest);
}

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0;
	int len_src = 0;

	for (; dest[len_dest] != '\0'; len_dest++)
		;

	for (; src[len_src] != '\0' ;)
		dest[len_dest++] = src[len_src++];

	dest[len_dest] = '\0';
	return (dest);
}

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}

	return (s1[i] - s2[i]);
}

char *_memset(char *s, char b, unsigned int n)
{
	uint16_t i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	uint16_t i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

char *_strchr(char *s, char c)
{
}

unsigned int _strspn(char *s, char *accept)
{
}

char *_strpbrk(char *s, char *accept)
{
}

char *_strstr(char *haystack, char *needle)
{
}


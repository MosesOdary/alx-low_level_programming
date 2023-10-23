#include "main.h"

/**
* _strstr - locates first occurrence of substring needle in string haystack
*
* @haystack: string to search
* @needle: substring to fetch
*
* Return: pointer beginning of substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0;
	int length = 0, count;

	length = strlen(needle);

	if (!length)
		return (haystack);

	for (; haystack[j] != '\0'; j++)
	{
		i = 0;
		if (haystack[j] == needle[i])
		{
			k = j;
			for (count = 0; count < length; count++)
			{
				if (haystack[k] != needle[i])
					break;

				k++;
				i++;
			}
		}
		if (count == length)
			break;
	}

	if (*(haystack + j) != '\0')
		return (haystack + j);

	else
		return ('\0');
}

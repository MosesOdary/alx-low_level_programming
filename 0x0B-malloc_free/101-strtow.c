#include "main.h"

/**
* LengthOfWord - finds length of a word
*
* @str: The string to be searched.
*
* Return: word length
*/

int LengthOfWord(char *str)
{
	uint8_t i = 0;
	uint16_t length = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		length++;
		i++;
	}

	return (length);
}

/**
* CountWords - Counts the number of words.
* @str: The string to be searched.
*
* Return: The number of words
*/

int CountWords(char *str)
{
	uint8_t i = 0, length = 0;
	uint16_t numberOfWords = 0;

	for (; *(str + i); i++)
		length++;

	for (i = 0; i < length; i++)
	{
		if (*(str + i) != ' ')
		{
			numberOfWords++;
			i += LengthOfWord(str + i);
		}
	}

	return (numberOfWords);
}

/**
* strtow - Splits string into words.
*
* @str: The string to split.
*
* Return: an array of words from the original string.
*/

char **strtow(char *str)
{
	char **words = NULL;
	uint8_t i = 0, j = 0, k = 0;
	uint16_t numberOfWords = 0, letters = 0;

	if (!str)
		return (NULL);

	numberOfWords = CountWords(str);
	
	if (!numberOfWords)
		return (NULL);

	words = malloc(sizeof(char *) * (numberOfWords + 1));
	
	if (!words)
		return (NULL);

	for (j = 0; j < numberOfWords; j++)
	{
		while (str[i] == ' ')
			i++;

		letters = LengthOfWord(str + i);

		words[j] = malloc(sizeof(char) * (letters + 1));

		if (!words[j])
		{
			while (j--)
				free(words[j]);

			free(words);
			return (NULL);
		}

		for (k = 0; k < letters; k++)
			words[j][k] = str[i++];

		words[j][k] = '\0';
	}

	words[j] = NULL;

	return (words);
}

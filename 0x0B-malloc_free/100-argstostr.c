#include "main.h"

/**
* argstostr -  concatenates all the arguments in av.
*
* @ac: number of arguments
* @av: argument vector
*
* Return: concatenated string argument
*/

char *argstostr(int ac, char **av)
{
	char *str = NULL;
	uint8_t i = 0, j = 0, k = 0;
	uint8_t length = 0;

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			length++;
		}
	}

	str = malloc(sizeof(char) * (ac + length + 1));

	if (!str)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
	}

	return (str);
}

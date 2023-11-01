#include "main.h"

/**
* alloc_grid - function that returns a 2 dimensional array of integers.
*
* @width: size of the inner array
* @height: size of outer array
*
* Return: 2D array
*/

int **alloc_grid(int width, int height)
{
	int **array = NULL;
	uint8_t i = 0;
	uint8_t j = 0;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (!array)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			while (i--)
				free(array[i]);

			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}

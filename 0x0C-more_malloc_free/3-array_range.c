#include "main.h"

/**
* array_range - creates an integer array
*
* @min: minimum int
* @max: maximum int
*
* Return: integer array
*/

int *array_range(int min, int max)
{
	uint16_t i = 0;
	uint16_t element = 0;
	int *arr;

	if (min > max)
		return (NULL);

	element = (max - min) + 1;

	arr = malloc(sizeof(int) * element);

	if (!arr)
	{
		free(arr);
		return (NULL);
	}

	for (; min < (max + 1); min++)
		arr[i++] = min;

	return (arr);
}

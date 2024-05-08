#include "search_algos.h"

/**
 * linear_search - Search for a value in a sorted array
 *
 * @array: integer array
 * @size: array size
 * @value: value to look up in the array
 *
 * Return: index of value or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	{
		return (-1);
	}

	for (; i < size; i++)
	{
		printf("Value checked array[%llu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
		array++;
	}

	return (-1);
}

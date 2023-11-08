#include "function_pointers.h"

/**
* int_index - searches for an integer.
*
* @array: integer array
* @size: array size
* @cmp: funtion that compares values
*
* Return: Index of first matching value or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	uint16_t i;

	if (array && cmp)
	{
		if (!size)
			return (-1);

		for (i = 0 ; i < size; i++)
		{
			if (cmp(array[i]) != '\0')
				break;

			else if (cmp(array[i]) == '\0')
				continue;
		}

		if (i == size)
			return (-1);

		return (i);
	}
	return (-1);
}

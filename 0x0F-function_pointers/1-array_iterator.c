#include "function_pointers.h"

/**
* array_iterator - operates on  array elements
*
* @array: integer array
* @size: array size
* @action: function to be executed
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	uint32_t i = 0;

	if (size && action && array)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == '\0')
				break;

			action(array[i]);
		}
	}
}

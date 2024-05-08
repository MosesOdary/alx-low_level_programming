#include "search_algos.h"

/**
 * interpolation_search - Search for a value in a sorted array
 *
 * @array: First element of the array
 * @size: Number of array elements
 * @value: Value to search for
 *
 * Return: The first index where value is locatedL
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = 0;

	if (array != NULL)
	{
		while ((array[high] != array[low]) &&
		       (value >= array[low]) &&
		       (value <= array[high]))
		{
			pos = low + (((double)(high - low) / (array[high] - array[low])) *
				     (value - array[low]));
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				low = pos + 1;
			else if (value < array[pos])
				high = pos - 1;
			else
				return (pos);
		}
		if (value == array[low])
			return (low);
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%lu] is out of range\n", pos);
	}
	return (-1);
}

#include "search_algos.h"

/**
 * advanced_binary_recursive - Search recursively for a value in an int array
 *
 * @array: First element of the sub-array to search.
 * @left: starting index of the sub-array to search.
 * @right: ending index of the sub-array to search.
 * @value: The value to search for.
 *
 * Return: Index where the value is located
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Search for a value in a sorted int array
 *
 * @array: ptr to the first element of the array to search.
 * @size: no. of elements in the array.
 * @value: the value to search for.
 *
 * Return: First index where the value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

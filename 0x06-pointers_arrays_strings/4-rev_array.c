#include "main.h"

/**
 * reverse_array - reverse the contents of an int array
 *
 * @a: Pointer to the array
 * @n: Number of array elements
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0, j = --n;
	int temp = 0;

	for (; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}


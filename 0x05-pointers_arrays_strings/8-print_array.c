#include <stdio.h>
#include "main.h"

/**
 * print_array - Print array elements
 *
 * @a: The array being printed
 * @n: The number of array elements being printed
 *
 * Return: void
*/

void print_array(int *a, int n)
{
	int i = 0;

	n--;

	for (; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[i]);
}


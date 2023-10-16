#include "main.h"

/**
 * swap_int - Swap 2 values
 *
 * @a: First value
 * @b: second value
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

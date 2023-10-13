#include "main.h"
/**
*print_triangle -  prints a triangle, followed by a new line
*
*@size: size of triangle
*/
void print_triangle(int size)
{
	int i, j, k = 0;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= (size - j); k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

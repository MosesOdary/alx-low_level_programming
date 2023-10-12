#include "main.h"

/**
 * print_numbers - print the numbers from 0 - 9
 *
 * Return: Always 0
*/

void print_numbers(void)
{
    int i = 0;

    for (; i < 10; i++)
		_putchar(i + '0');
}
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char i = 'a';
	int j = 0;

	for (; j < 10; j++)
	{	
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
			_putchar('\n');
	}
}

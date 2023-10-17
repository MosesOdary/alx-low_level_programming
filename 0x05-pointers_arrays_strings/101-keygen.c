#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates a random password
 *
 * Return: 0 - Success
 */



int main(void)
{
	int i = 0;
	char c = 0;

	srand(time(0));
	
	while (i <= 2645)
	{
		c = rand() % 128;
		i += c;
		putchar(c);
	}

	putchar(2772 - i);
	
	return (0);
}



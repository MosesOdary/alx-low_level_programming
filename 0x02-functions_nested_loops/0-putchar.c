#include "main.h"

/**
 * main - Print _putchar and exit
 *
 * Return:0
 */
int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	for ( ; i < 8; i++)
		_putchar(ch[i]);
	_putchar('\n');

	return (0);
}

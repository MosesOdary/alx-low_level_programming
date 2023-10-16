#include <unistd.h>
#include "main.h"

/**
 * _puts - Print string to std out followed by a new line
 *
 * @str: The string being printed
 *
 * Return: void
*/

void _puts(char *str)
{
	write(2, str, sizeof(str));
}

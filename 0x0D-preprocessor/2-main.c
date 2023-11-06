/**
 * _putchar - Print a char
 *
 * @c: the character to print
 *
 * Return: status code
*/
int _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	const char *fileName = __FILE__;

	while (*fileName)
	{
		_putchar(*fileName);
		fileName++;
	}

	return (0);	
}


#include "main.h"

/**
* main - function that copies file content to another
*
* @ac: argument count
* @argv: argument vector
*
* Return: 1 (success)
*/

int main(int ac, char *argv[])
{
	FILE *file1 = fopen(argv[1], "r");
	FILE *file2 = fopen(argv[2], "a");
	char buffer[1024];
	__int8_t n = 0;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!file1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		n = fclose(file2);
		exit(98);
	}
	if (!file2)
	{
		fclose(file1);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (fgets(buffer, sizeof(buffer), file1))
	{
		dprintf(fileno(file2), "%s", buffer);
	}
	n = fclose(file1);
	if (n == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(file1));
		exit(100);
	}
	n = fclose(file2);
	if (n == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(file2));
		exit(100);
	}

	return (0);
}


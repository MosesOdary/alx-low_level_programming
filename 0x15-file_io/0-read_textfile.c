#include "main.h"

/**
* read_textfile - reads a text file and prints it to standard output.
*
* @filename: name of file to read
* @letters: number of characters to read and printed
*
* Return: Number of characters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	__uint16_t i = 0;
	__uint16_t c;

	if (!filename)
		return (0);

	file = fopen(filename, "r");

	if (!file)
		return (0);

	c = fgetc(file);

	while ((i < letters) && (c != EOF))
	{
		write(STDOUT_FILENO, &c, 1);
		c = fgetc(file);
		i++;
	}
	fclose(file);

	return (i);
}


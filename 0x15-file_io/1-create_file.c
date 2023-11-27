#include "main.h"

/**
* create_file - create a file
*
* @filename: name of file to create
* @text_content: text to write in file
*
* Return: 1 (Success)
*/

int create_file(const char *filename, char *text_content)
{
	FILE *file;
	int i = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	file = fopen(filename, "w");

	if (!file)
		return (-1);

	chmod(filename, 0600);

	while (text_content[i++])
	{
		putc(text_content[i], file);
	}

	fclose(file);
	return (1);
}


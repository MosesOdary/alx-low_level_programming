#include "main.h"

/**
* append_text_to_file - appends to a file
*
* @filename: file to append to
* @text_content: content to append to file
*
* Return: 1 (success)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int i = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	file = fopen(filename, "a");

	if (!file)
		return (-1);

	while (text_content[i++])
	{
		putc(text_content[i], file);
	}

	fclose(file);
	return (1);
}

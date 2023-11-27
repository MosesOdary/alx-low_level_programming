#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#include "main.h"

char *CreateBuffer(char *file);
void CloseFile(int fd);

/**
 * main - Copies the contents of a file to another
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to, read_, write_;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = CreateBuffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	read_ = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || read_ == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_ = write(to, buffer, read_);
		if (to == -1 || write_ == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_ = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_ > 0);

	free(buffer);
	CloseFile(from);
	CloseFile(to);

	return (0);
}

/**
 * CreateBuffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *CreateBuffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * CloseFile - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void CloseFile(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


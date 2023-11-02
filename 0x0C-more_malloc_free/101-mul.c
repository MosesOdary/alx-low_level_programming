#include "main.h"

/**
* main - multiply two numbers
*
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
}

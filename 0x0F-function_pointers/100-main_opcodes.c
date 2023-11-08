#include "function_pointers.h"

/**
 * main - check Holberton student's code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *arr = (char *) main;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(!argv[1]))
	{
		printf("Error\n");
		exit(2);
	}
	for (; i < (atoi(argv[1])); i++)
	{
		if (i == (atoi(argv[1]) - 1))
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}

	return (0);
}

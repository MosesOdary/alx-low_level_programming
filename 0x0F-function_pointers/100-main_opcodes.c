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

	uint16_t i = 0;
	uint32_t bytes = 0;
	int (*address)(int, char **) = main;
	unsigned char opcode = "";

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (!bytes)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i <  bytes; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == (bytes - 1))
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	
	return (0);
}

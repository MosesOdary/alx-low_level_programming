#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "3-calc.h"

/**
* main - Do some arithmetic
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0 success
*/

int main(int argc, char *argv[])
{
	int32_t num1 = 0;
	int32_t num2 = 0;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (!get_op_func(operator) || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}

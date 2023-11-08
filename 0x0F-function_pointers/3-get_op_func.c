#include "function_pointers.h"

#include "3-calc.h"

/**
* get_op_func - Calls correct function based on the operator
*
* @s: operator
*
* Return: appropriate subroutine
*/

int (*get_op_func(char *s))(int, int)
{
	operations ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op && *(ops[i].op) != *s)
		i++;

	return ((ops[i]).f);
}

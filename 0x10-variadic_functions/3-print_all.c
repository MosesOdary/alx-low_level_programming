#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @args: A list characters to be print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an int.
 * @args: A list of integers to be print
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: A list of floats to be print
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: A list of strings to print
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (!str)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
* print_all - function that prints any arguments passes
*
* @format: format to print
*/
void print_all(const char * const format, ...)
{
	va_list args;
	uint16_t i = 0;
	uint16_t j = 0;
	char *separator = NULL;

	selector funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while ((j < 4) && (*(format + i) != *(funcs[j].ident)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].f(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}

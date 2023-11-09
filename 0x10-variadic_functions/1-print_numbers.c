#include "variadic_functions.h"

/**
* print_numbers - print all arguments (numbers)
*
* @separator: separator delimiting each number
* @n: number of arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list varList;
	uint32_t i = 0;

	va_start(varList, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(varList, int));
		if (separator && (i < (n - 1)))
			printf("%s", separator);
	}
	printf("\n");

	va_end(varList);
}

#include "variadic_functions.h"

/**
* print_strings - print string arguments
*
* @separator: word separator
* @n: number of arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list varList;
	uint32_t i = 0;
	char *str = NULL;

	va_start(varList, n);

	for (; i < n; i++)
	{
		str = va_arg(varList, char *);

		if (!str)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && (i < (n - 1)))
			printf("%s", separator);
	}
	printf("\n");

	va_end(varList);
}

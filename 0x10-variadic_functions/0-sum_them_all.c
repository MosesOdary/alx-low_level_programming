#include "variadic_functions.h"

/**
* sum_them_all - adds the numbers passed as arguments to it
*
* @n: argument count
*
* Return: sum or 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list varList;
	uint16_t i = 0;
	uint32_t sum = 0;

	va_start(varList, n);

	if (n == 0)
		return (0);

	for (; i < n; i++)
		sum += va_arg(varList, uint32_t);

	va_end(varList);
	return (sum);
}

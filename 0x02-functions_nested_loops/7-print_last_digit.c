#include "main.h"

/**
 * print_last_digit - Print the last digit of a num
 * @num: The number whose last digit will be printed
 * Return: The last digit of the number
 */

int print_last_digit(int num)
{
	int temp = num % 10;
	temp = ((temp * 10) + temp);

	return (temp);
}

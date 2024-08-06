#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer whose last digit is to be printed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;

	int last_digit = n % 10;
	return (last_digit);
}

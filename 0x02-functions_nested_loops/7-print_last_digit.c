#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer whose last digit is to be printed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	/* If the last digit is negative, make it positive */
	if (last_digit < 0)
		last_digit = -last_digit;

	return (last_digit + '0');
}

#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: input value for function print_last_digit
 * Return: The value of the last digit
 */

int print_last_digit(int i)
{
	if (i < 0 || i >= 0)
	{
		int n = i % 10;

		_putchar (n + '0');
		return (n);
	}
	else
		return (0);
}

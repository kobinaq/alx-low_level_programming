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
		i = i % 10;

		_putchar (i + '0');
		return (i);
	}
	else 
		return (1);
}

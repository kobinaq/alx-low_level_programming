#include "main.h"

/**
 * print_number - prints an integer using only _putchar
 * @n: the integer to be printed
 */
void print_number(int n)
{
    /* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

    /* Handle the smallest possible integer */
	if (n == -2147483648)
	{
		_putchar('2');
		n = 147483648;
	}

    /* Remove the last digit and recursively call print_number */
	if (n / 10)
		print_number(n / 10);

    /* Print the last digit */
	_putchar((n % 10) + '0');
}

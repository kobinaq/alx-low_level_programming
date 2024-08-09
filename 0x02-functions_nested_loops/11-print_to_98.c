#include "main.h"

/**
 * print_number - prints numbers
 * print_to_98 - prints numbers in progression up to 98
 * @n: input number
 */

void print_number(int n);

void print_to_98(int n)
{
	while (n != 98)
	{
		print_number(n);
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		else
			n--;
	}
	print_number(98);
	_putchar('\n');
}

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		if (n >= 100)
		{
			_putchar((n / 100) + '0');
			n %= 100;
		}
		_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');
}

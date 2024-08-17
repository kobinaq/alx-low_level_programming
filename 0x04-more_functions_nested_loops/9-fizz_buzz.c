#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * _putchar - prints character
 * print_number - prints a number
 * Return - always 0
 * @c: input number
 * @n: input number
 */

int _putchar(char c)
{
    return putchar(c);
}

void print_number(int n)
{
	if (n >= 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			print_number(i);
		}

		if (i < 100)
		{
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
	return (0);
}

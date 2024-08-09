#include "main.h"

/**
 * print_to_98 - prints numbers in progression up to 98
 * @n: input number
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar(n + '0');
		if (n < 98)
			n++;
		else
			n--;
	}
	_putchar(n + '0');
}

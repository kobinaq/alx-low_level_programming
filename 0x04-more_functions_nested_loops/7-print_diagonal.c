#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * @n: input number for the nunber of lines
 *
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = 1;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (a < n)
		{
			while (b < (a - 1))
				_putchar(' ');
			_putchar ('\\');
			_putchar('\n');
			a++;
			b++;
		}
		_putchar ('\n');
	}
}

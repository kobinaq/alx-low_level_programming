#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * @n: the number of times the character \ should be printed
 *
 */

void print_diagonal(int n)
{
	int a = 0;
	int b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (a < n)
		{
			b = 0;

			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar ('\\');
			_putchar('\n');
	 		a++;
		}
	}
}

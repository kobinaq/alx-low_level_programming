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
	int b = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar ('\\');
			_putchar('\n');
			a++;
		}
		_putchar ('\n');
	}
}

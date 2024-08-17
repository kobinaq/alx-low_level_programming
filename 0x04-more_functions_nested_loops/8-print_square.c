#include <stdio.h>
#include "main.h"

/**
 * print_square - draws a straight line in the terminal
 * @size: prints a square, followed by a new line.
 *
 */

void print_square(int size)
{
	int a = 0;
	int b;

	if (size <= 0)
		_putchar('\n');
	while (a < size)
	{
		b = 0;

		while (b < size)
		{
			_putchar ('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
}

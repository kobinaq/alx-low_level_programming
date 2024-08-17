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

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (a <= n)
		{
			_putchar ('\\');
			a++;
		}
		_putchar ('\n');
	}
}

#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: Always 0
 */

void print_numbers(void)
{
	int k = 0;

	while (k < 10)
	{
		_putchar(k + '0');
		k++;
	}
	_putchar('\n');
}

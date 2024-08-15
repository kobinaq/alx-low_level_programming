#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10x the numbers, from 0 to 14, followed by a new line
 * Return: Always 0
 */

void more_numbers(void)
{
	int k = 0;
	int b = 0;

	while (b < 10)
	{
		while (k < 15)
		{
			_putchar(k + '0');
			k++;
		}
		b++;
	}
	_putchar('\n');
}

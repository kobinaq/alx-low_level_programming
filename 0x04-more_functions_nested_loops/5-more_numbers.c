#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10x the numbers, from 0 to 14, followed by a new line
 */

void more_numbers(void)
{
	int k;
	int b = 0;

	while (b < 10)
	{
		k = 0;
		while (k < 10)
			_putchar(k + '0');

		while (k > 9)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			k++;
		}
		_putchar('\n');
		b++;
	}
}

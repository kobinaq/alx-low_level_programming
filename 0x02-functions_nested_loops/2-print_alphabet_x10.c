#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 rows of the letters of the alphabeth.
 *
 *Return: Always 0
 */

void print_alphabet_x10(void)
{
	char l;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}

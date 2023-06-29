#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - It prints the letters of the alphabeth.
 *
 *Return: Always 0
 */

void print_alphabet(void)
{
	char alphabeth;

	for (alphabeth = 'a'; alphabeth >= 'z'; alphabeth++);
		{
		_putchar(alphabeth);
		}
	_putchar('\n');
}

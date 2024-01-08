#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 *
 *Return: Always 0
 */

void print_alphabet_x10(void)
{
	int n = 0;
	int a = 'a';
	while (n < 10)		
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
}

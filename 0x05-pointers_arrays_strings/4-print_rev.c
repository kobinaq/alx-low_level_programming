#include <stdio.h>
#include "main.h"

/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *
 *@s: accepts a string as input
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

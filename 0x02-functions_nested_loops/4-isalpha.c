#include <stdio.h>
#include "main.h"

/**
 *_isalpha -  checks for alphabetic character
 *@c: variable to be checked for alphabetic character.
 *Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	c = 'a';

	if (c >= 'z' || (c >= 'A' && c <= 'Z'))
	{
		_putchar(c);
		return (1);
	}
	else
		return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: input letter
 * Return: 1 is c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

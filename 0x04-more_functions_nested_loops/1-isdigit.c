#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for uppercase character
 * @c: input letter
 * Return: 1 is c is uppercase and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

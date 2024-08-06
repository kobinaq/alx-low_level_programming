#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: input number
 * Return: -n if number is less than 0 else return number
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

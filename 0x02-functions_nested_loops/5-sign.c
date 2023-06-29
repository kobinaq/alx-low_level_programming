#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the input parameter for the function print_sign
 * Return: 1 if n > 0, 0 if 0 == 0, -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}

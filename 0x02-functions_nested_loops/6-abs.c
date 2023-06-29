#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 * @num: input integer for the function _abs
 * Return: Always equal to the input
 */

int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}

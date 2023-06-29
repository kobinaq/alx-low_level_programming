#include "main.h"

/**
 * _islower - checks the input to determine if it is lower case
 *
 * @c: is an input integer
 *
 * Return: 1 when succesful, 0 when unsuccesful
 *
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

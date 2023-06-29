#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: input input for the function _isalpha
 *Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

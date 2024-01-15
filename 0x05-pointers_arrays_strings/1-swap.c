#include <stdio.h>
#include "main.h"

/**
 *swap_int - swaps the values of two integers.
 *@a: input pointer 1
 *@b: input pointer 2
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;

}

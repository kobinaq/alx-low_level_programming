#include <stdio.h>

/**
 *main - Entry Point
 *@argc: counts the number of command line arguments
 *@argv: array of command line arguments
 *Return: Always 0
 */

int main(int argc, int **argv)
{
	printf("%d\n", argc - 1);

	return(0);
}

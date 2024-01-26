#include <stdio.h>

/**
 *main - Entry Point
 *@argc: counts the number of command line arguments
 *@argv: array of command line arguments
 *Return: Always 0
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	argv[0] = argv[0];

	return (0);
}

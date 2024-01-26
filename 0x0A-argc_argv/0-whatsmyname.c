#include <stdio.h>

/**
 *main - Entry point
 *@argc: counts the number of arguments on the command line
 *@argv: an array of length argc of arguments
 *Return: Always 0
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@argc: counts the number of command line arguments
 *@argv: array of command line arguments
 *Return: 1 means error
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int num3 = num1 * num2;

		if (num1 == 0 && num2 == 0)
			printf("undefined");
		else
			printf("%d\n", num3);
	}
	else
	{
		printf("error\n");
		return (1);
	}

	return (0);
}

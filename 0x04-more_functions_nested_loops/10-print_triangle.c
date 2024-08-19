#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
    int i = 1;
    int j;

    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        while (i <= size)
        {
            j = 1;

            while (j <= size)
            {
                if (j <= size - i)
                {
                    _putchar(' ');  // Print spaces before the #
                }
                else
                {
                    _putchar('#');  // Print the # character
                }
                j++;
            }
            _putchar('\n');  // Move to the next line after each row
            i++;
        }
    }
}


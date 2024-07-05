#include <unistd.h>

/**
  *main - Entry point
  *Return: Always 0
  */

int main(void)
{
        char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int i = 0;

    while (str[i])
    {
        fputc(str[i], stderr);
        i++;
    }
        return (1);
}

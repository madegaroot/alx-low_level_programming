#include <stdio.h>

/**
 * main - Entry point. Prints the first 98 Fibonacci numbers separated by commas.
 *
 * Return: Always 0.
 */
int main(void)
{
    int a = 1, b = 2;
    printf("%d, %d", a, b);
    for (int i = 2; i < 98; i++)
    {
        int c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
    printf("\n");

    return (0);
}


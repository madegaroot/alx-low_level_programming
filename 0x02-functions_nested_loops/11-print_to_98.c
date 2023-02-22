#include <stdio.h>
#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line
 *
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i, j;

        if (n <= 98)
    {
        for (int i = n; i < 98; i++)
		if (i != 98)
            printf("%d\n", i);
    }
    else if (n >= 98)
    {
        for (j = n; i >= 98; j--)
	{
		if (j != 98)
    		printf("%d, ", j);
		else if (j == 98)
                printf("98\n");
	}
    }
}


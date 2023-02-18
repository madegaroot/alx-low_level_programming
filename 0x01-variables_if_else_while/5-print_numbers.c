#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int i;

  for (i = 0; i < 10; i++)
  {
    putchar(i + '0'); /* Convert integer to character and print i */
  }

  putchar('\n');

  return (0);
}


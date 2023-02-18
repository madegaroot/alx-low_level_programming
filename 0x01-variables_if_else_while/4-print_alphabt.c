#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int i;

  /* Print lowercase alphabet, except 'q' and 'e' */
  for (i = 97; i <= 122; i++)
  {
    if (i != 101 && i != 113)
    {
      putchar(i);
    }
  }

  /* Print new line */
  putchar('\n');

  return (0);
}


#include "main.h"
/**
 * print_last_digit - prints the last digit of a number and returns its value
 *
 * @n: the number to get the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}

	last_digit = n % 10;
	putchar('0' + last_digit);
	return last_digit;
}


#include "main.h"
/**
*flip_bits - counts the number of bits to change
*to get from one number to another
*@n: first number
*@p: second number
*
*Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int p)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ p;
for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}

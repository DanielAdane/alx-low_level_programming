#include "holberton.h"
/**
 * print_sign -  a function that print the sign of a number
 * @n: The number
 * Return:
 * Return 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
int res;
if (n > 0)
{
res = 1;
_putchar('+');
}
else if (n == 0)
{
res = 0;
_putchar('0');
}
else
{
res = -1;
_putchar('-');
}
return (res);
}

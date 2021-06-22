#include "holberton.h"
#include "6-abs.c"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: The number
 * Return: Return the the last digit of the number
 */
int print_last_digit(int n)
{
int res;
int absRes;
res = n % 10;
absRes = _abs(res);
_putchar('0' + absRes);
return (absRes);
}

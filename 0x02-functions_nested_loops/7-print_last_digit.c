#include "holberton.h"
#include "6-abs.c"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: The number
 * Return: Return the the last digit of the number
 */
int print_last_digit(int n)
{
int absNum;
int res;
absNum = _abs(n);
res = absNum % 10;
_putchar('0' + res);
return (res);
}

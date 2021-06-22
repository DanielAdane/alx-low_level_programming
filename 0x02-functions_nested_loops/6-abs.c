#include "holberton.h"
/**
 * _abs -  a function that computes the absolute value of an integer.
 * @n: The number
 * Return: Return the absolute value of an integer
 */
int _abs(int n)
{
int res;
if (n < 0)
{
res = n * -1;
}
else
{
res = n;
}
return (res);
}

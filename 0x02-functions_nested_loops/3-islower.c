#include "holberton.h"
/**
 * _islower -  a function that checks for lowercase character
 * @c: The character ot ascii code
 * Return: 1 if islower otherwise 0
 */
int _islower(int c)
{
int res;
if (c >= 97 && c <= 122)
{
res = 1;
}
else
{
res = 0;
}
return (res);
}

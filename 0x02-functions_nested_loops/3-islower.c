#include "holberton.h"
/**
 * islower -  a function that checks for lowercase character
 * Return: Always Success
 */
int _islower(int c)
{
int res;
if (c >= 97 && c <= 122 )
{
res = 1;
}else
{
res = 0;
}
return res;
}
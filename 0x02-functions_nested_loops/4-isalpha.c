#include "holberton.h"
/**
 * _isalpha -  a function that checks for lowercase character
 * @c: The character or ascii code
 * Return: 1 if isalpha otherwise 0
 */
int _isalpha(int c)
{
int res;
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
res = 1;
}
else
{
res = 0;
}
return (res);
}

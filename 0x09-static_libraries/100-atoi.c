#include "holberton.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: input
 * Return: output
 */
int _atoi(char *s)
{
int res = 0;
for (int i = 0; s[i] != '\0'; ++i)
{
res = res * 10 + s[i] - '0';    
} 
return (0);
}

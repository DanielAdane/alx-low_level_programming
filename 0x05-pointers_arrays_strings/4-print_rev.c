#include "holberton.h"
/**
 *print_rev - display revert string data
 *@s: pointer char
 *Return: void
 */
void print_rev(char *s)
{
int strCounter = 0;
while (s[strCounter])
{
s++;
}
for (strCounter = strCounter - 1; s[strCounter]; strCounter--)
{
_putchar(s[strCounter]);
}
_putchar('\n');
}

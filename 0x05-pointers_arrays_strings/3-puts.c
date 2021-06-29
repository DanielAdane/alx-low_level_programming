#include "holberton.h"
/**
 *_puts - display string data
 *@str: pointer char
 *Return: void
 */
void _puts(char *str)
{
int strCounter = 0;
while (str[strCounter])
{
_putchar(str[strCounter]);
strCounter++;
}
_putchar('\n');
}

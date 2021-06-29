#include "holberton.h"
/**
 *puts_half - Write a function that prints half of a string
 *@str: pointer char
 *Return: void
 */
void puts_half(char *str)
{
int strCounter = 0;
int halfStr;
while (str[strCounter])
{
strCounter++;
halfStr = strCounter - (strCounter) / 2;
}
while (halfStr <= strCounter)
{
_putchar(str[halfStr]);
halfStr++;
}
_putchar('\n');
}

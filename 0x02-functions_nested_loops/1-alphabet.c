#include "holberton.h"
/**
 * print_alphabet - print alphabets(a-z) in lower case
 * Return: Always Success
 */
int print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
return (0);
}

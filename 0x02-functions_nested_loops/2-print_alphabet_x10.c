#include "holberton.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - print alphabets(a-z) in lower case ten times
 * Return: Always Success
 */
int print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
print_alphabet();
}
return (0);
}

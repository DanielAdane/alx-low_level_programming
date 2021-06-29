#include "holberton.h"
/**
 *swap_int - swap form integer a to integer b
 *@a: pointer integer
 *@b: pointer integer
 *Return: void
 */
void swap_int(int *a, int *b)
{
int savedValue = *a;
*a = *b;
*b = savedValue;
}

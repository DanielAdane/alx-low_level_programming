#include "holberton.h"
#include <stdio.h>
/**
 *print_array - Write a function that prints n elements of an array of integers
 *@a: pointer integer
 *@n: parameter integer
 *Return: void
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if(i < n - 1)
{
printf(", ");  
}
i++;
}
}

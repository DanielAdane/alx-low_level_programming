#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
long longIntType;
long long longLongIntType;
char charType;
printf("Size of char: %d byte(s)\n", sizeof(charType));
printf("Size of int: %d byte(s)\n", sizeof(intType));
printf("Size of a long int: %d byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %d byte(s)\n", sizeof(longLongIntType));
printf("Size of float: %d byte(s)\n", sizeof(floatType));
return (0);
}

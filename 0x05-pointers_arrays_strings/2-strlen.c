#include "holberton.h"
/**
 *_strlen - return size of array char
 *@s: pointer integer
 *Return: size of array char
 */
int _strlen(char *s)
{
int strCounter = 0;
while (s[strCounter])
{
strCounter++;
}
return  (strCounter);
}

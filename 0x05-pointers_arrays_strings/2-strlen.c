#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: the string of characters
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i;

for (i = 0; *s != '\0'; i++)
{
s++;
}
return (i);
}

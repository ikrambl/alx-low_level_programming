#include "main.h"
#include <stdio.h>

/**
 * _isupper -  checks for uppercase character.
 * @c: the character
 * Return: 1 if if c is uppercase returns 0 otherwise
 */
int _isupper(int c)
{
if (c <= 90 && c >= 65)
{
return (1);
}
else
{
return (0);
}
}


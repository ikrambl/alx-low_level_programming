#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: the character
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (c <= 57 && c >= 48)
{
return (1);
}
else
{
return (0);
}
}

#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: the converted string to an integer
 */
int _atoi(char *s)
{
int si;
unsigned int result;

si = 1;
result = 0;
while (*s++)
{
if (*s == '-')
{
si *= -1;
}
else if (*s <= '9' && *s >= '0')
{
result = (result * 10) + (*s - '0');
}
else if (result > 0)
{
break;
}
}
return (result *si);
}




#include "main.h"
#include <stdio.h>

/**
 * _strspn -  gets the length of a prefix substring
 * @s: source
 * @accept: character
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int b = 0;
int j;

for (; *s != '\0'; s++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
{
b++;
break;
}
else if (accept[j + 1] == '\0')
{
return (b);
}
}
}
return (b);
}

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
char *a = accept;

for (; *s != '\0'; s++)
{
for (; *a != '\0'; a++)
{
if (*s == *a)
{
b++;
break;
}
else if (*(a + 1) == '\0')
{
return (b);
}
}
}
return (b);
}

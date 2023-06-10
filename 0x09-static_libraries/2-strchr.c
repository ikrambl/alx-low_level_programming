#include "main.h"
#include <stdio.h>

/**
 * *_strchr -  locates a character in a string
 * @s: source
 * @c: charcter
 * Return: pointer to c or NULL
 */
char *_strchr(char *s, char c)
{
for (; *s != '\0'; s++)
{
if (*s == c)
{
return (s);
}
}
if (c == '\0')
{
return (s);
}
return ('\0');
}

#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;

for (a = 0; dest[a]!= '\0'; a++)
{
;
}
for (b = 0; src[b] != '\0'; b++)
{
dest[a] = src[b];
a++;
}
dest[a] = '\0';
return (dest);
}

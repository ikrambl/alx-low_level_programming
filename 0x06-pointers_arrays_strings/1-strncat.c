#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: destination value
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;

for (a = 0; dest[a] != '\0'; a++)
{
;
}
b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}

#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copies memory area.
 * @dest: destinatio,
 * @src: source
 * @n: num of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
char *s = src;

for (; n > 0; n--)
{
*d = *s;
d++;
s++;
}
return (dest);
}

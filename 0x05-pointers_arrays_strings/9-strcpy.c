#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
int j;

for (i = 0; *(src + i) != '\0'; i++)
{
;
}
j = 0;
while (j < i)
{
dest[j] = src[j];
j++;
}
dest[j] = '\0';
return (dest);
}

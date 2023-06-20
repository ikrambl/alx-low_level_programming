#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the character
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	unsigned int a = 0;
	unsigned int count;
	char *strdp = malloc(sizeof(char) * (a + 1));

if (str == NULL)
{
	return (NULL);
}

while (str[a] != '\0')
{
	a++;
}

strdp = malloc(sizeof(char) * (a + 1));

if (strdp == NULL)
{
	return (NULL);
}
for (count = 0; count <= a; count++)
{
	strdp[count] = str[count];
}
return (strdp);
}


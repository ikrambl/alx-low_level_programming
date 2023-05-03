#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
int i;
int j;
char r;

for (i = 0; s[i] != '\0'; i++)
{
;
}
for (j = 0; j < i; j++)
{
i--;
r = s[j];
s[j] = s[i];
s[i] = r;
}
}


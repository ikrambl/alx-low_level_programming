#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the character
 * Return: void
 */
void print_rev(char *s)
{
int i;

for (i = 0; *s != '\0'; i++)
{
s++;
}
s--;
while (i--)
{
_putchar(*s--);
}
_putchar('\n');
}

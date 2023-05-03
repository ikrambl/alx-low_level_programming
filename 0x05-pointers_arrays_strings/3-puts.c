#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
int i;
for (i = *str; i != '\0'; i++)
{
_putchar(*str + 48);
}
_putchar('\n');
}

#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the character
 * Return: void
 */
void print_line(int n)
{
int count;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (count = 1; count <= n; count++)
{
_putchar('_');
}
_putchar('\n');
}
}

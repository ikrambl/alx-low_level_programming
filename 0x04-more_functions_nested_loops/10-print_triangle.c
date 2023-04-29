#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return void
 */
void print_triangle(int size)
{
int h;
int b;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (h = 1; h <= size; h++)
{
for (b = h + 1; b <= size; b++)
{
_putchar(' ');
}
for (b = 1; b <= h; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

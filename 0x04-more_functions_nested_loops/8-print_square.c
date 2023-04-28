#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 * Return void
 */
void print_square(int size)
{
int height;
int width;

for (width = 0; width < size; width++)
{
for (height = 0; height < size; height++)
{
_putchar('#');
}
_putchar('\n');
}
}


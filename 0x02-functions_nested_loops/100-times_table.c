#include "main.h"
/**
 * print_times_table - prints the n times table
 *@n: the number to be inserted
 */
void print_times_table(int n)
{
int a;
int b;
int c;

if (n <= 15 && n >= 0)
{
for (a = 0; a <= n; a++)
{
_putchar('0');
for (b = 1; b <= n; b++)
{
c = a * b;
_putchar(',');
_putchar(' ');
if (c <= 9)
{
_putchar(' ');
}
else if (c <= 99)
{
_putchar(' ');
}
else if (c >= 100)
{
_putchar((c / 100) + '0');
_putchar((c / 10) % 10 + '0');
}
else if ((c >= 10 && c <= 99))
{
_putchar((c / 10) + '0');
}
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
}

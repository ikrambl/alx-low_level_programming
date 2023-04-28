#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers,
 *
 * Return void
 */
void more_numbers(void)
{
int times;
int i;

for (times = 0; times <= 9; times++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar(1 + 48);
}
_putchar(i % 10 + 48);
}
_putchar('\n');
}
}

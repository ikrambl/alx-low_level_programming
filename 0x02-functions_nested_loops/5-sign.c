#include "main.h"
/**
 * print_sign - a function that prints the sign of a number.
 * @n: the integer holding the sigh
 * Return:  1 if n is greater than 0, 0 if n is 0, -1 if n is less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}

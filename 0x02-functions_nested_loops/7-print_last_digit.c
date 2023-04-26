#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @a: the number
 * Return: the value of the last digit
 */
int print_last_digit(int a)
{
int last_dig = a % 10;

if (last_dig < 0)
{
_putchar(last_dig * -1 + '0');
return (-last_dig);
}
else
{
_putchar(last_dig + '0');
return (last_dig);
}
}

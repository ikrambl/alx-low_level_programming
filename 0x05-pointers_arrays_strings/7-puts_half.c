#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
int count = 0;

while (str[count] != '\0')
{
count++;
}
count++;
count /= 2;
while (str[count] != '\0')
{
_putchar(str[count]);
count++;
}
_putchar('\n');
}

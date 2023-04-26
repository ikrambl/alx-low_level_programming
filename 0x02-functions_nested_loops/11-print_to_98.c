#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers to 98
 * @n: the number to be printed
 */
void print_to_98(int n)
{
int i;

if (n < 98)
{
for (i = n; i < 98; i++)
printf("%d, ", i);
}
else if (n > 98)
{
for (i = n; i > 98; i--)
printf("%d, ", i);
}
printf("98");
printf("\n");
}




#include "main.h"
#include<stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: first integer
 * @n: the number of elements of the array
 * Return: void
 */
void print_array(int *a, int n)
{
int count = 0;

while (count < n)
{
if (count == (n - 1))
{
printf("%d", a[count]);
}
else
{
printf("%d, ", a[count]);
}
count++;
}
printf("\n");
}


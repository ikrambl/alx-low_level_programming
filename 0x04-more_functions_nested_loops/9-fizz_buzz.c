#include <stdio.h>
/**
 * main - prints fizzbuzz
 *
 * Return: Always 0.
 */
int main(void)
{
int count;

for (count = 1; count <= 100; count++)
{
if (count % 3 == 0 && !(count % 5 == 0))
{
printf(" Fizz");
}
else if (!(count % 3 == 0) && count % 5 == 0)
{
printf(" Buzz");
}
else if (!(count % 3 == 0) && !(count % 5 == 0))
{
if (count == 1)
{
printf("%d", count);
}
else
{
printf(" %d", count);
}
}
else if (count % 3 == 0 && count % 5 == 0)
{
printf(" FizzBuzz");
}
}
printf("\n");
return (0);
}

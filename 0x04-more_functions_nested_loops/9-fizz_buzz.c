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
printf("Fizz ");
}
else if (!(count % 3 == 0) && count % 5 == 0)
{
printf("Buzz ");
}
else if (!(count % 3 == 0) && !(count % 5 == 0))
{
printf("%d ", count);
}
else if (count % 3 == 0 && count % 5 == 0)
{
printf("FizzBuzz ");
}
else if (count == 99)
{
printf("Buzz");
}
}
printf("\n");
return (0);
}

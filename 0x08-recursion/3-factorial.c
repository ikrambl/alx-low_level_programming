#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: number input
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (-1);
}

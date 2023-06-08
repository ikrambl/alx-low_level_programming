#include "main.h"
#include <stdio.h>

/**
 * _find_square_root - finds the natural squrae root of n
 * @n: the number
 * @a: square root
 * Return: square root.
 */
int _find_square_root(int n, int a)
{
if (a * a == n)
{
return (a);
}
else if (a * a > n)
{
return (-1);
}
else
return (_find_square_root(n, a + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
	return (-1);
}
else
return (_find_square_root(n, 0));
}

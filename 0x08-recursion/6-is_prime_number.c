#include "main.h"
#include <stdio.h>

/**
 * prime_check - returns 1 if the prime number
 * @n: the number entered
 * @a: the divisor
 *
 * Return: 1 if the input integer is a prime number otherwise 0
 */
int prime_check(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	else if (n % a == 0)
	{
		return (0);
	}
	else
		return (prime_check(n, a - 1));
}
/**
 * is_prime_number - returns the prime number
 * @n: the number entered
 *
 * Return: 1 if the input integer is a prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (prime_check(n, n - 1));
}

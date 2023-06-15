#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}

/**
 * main - multiplies two numbers.
 * @argc: the arguments count
 * @argv: the array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n1, n2, mul;

	while (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	mul = n1 * n2;

printf("%d\n", mul);
return (0);
}

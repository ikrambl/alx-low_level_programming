#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
 * _isdigit - checks for a digit
 * @c: the character
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (c <= 57 && c >= 48)
{
return (1);
}
else
{
return (0);
}
}

/**
 * main - prints all arguments it receives.
 * @argc: the arguments count
 * @argv: the array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result;
	int count;
	int i;

	result = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		char *c = argv[count];

		for (i = 0; c[i] != '\0'; i++)
		{
			while (!isdigit(c[i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += (_atoi(c));
	}
	printf("%d\n", result);
	return (0);
}



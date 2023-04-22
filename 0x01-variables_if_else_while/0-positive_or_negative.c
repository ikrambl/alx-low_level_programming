#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a C program assigning value to variable n
 * Return: 0 (success)
*/

/* main - a C program assigning value to variable n */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
		printf("%d is negative\n", n);
	}
	return (0);
	}

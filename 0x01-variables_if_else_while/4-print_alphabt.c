#include <stdio.h>
/**
 * main - a C program prints alpha except qe
 * Return: 0 (success)
 */
int main(void)
{
	int i = 97;

	for (i = 97 ; i <= 122 ; i++)
{
	if (i == 101 || i == 113)
	{
		i++;
		continue;
	}
	putchar(i);
}
putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - a Cprogram printing all singlr digitd
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + 48);
	}
	putchar('\n');
	return (0);
}

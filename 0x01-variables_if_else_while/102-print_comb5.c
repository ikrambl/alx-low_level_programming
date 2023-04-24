#include <stdio.h>
/**
 * main - a C program printing from 0 to 99
 * Return: 0 (success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			int i = num1 / 10;
			int j = num1 % 10;
			int k = num2 / 10;
			int l = num2 % 10;

			putchar('0' + i);
			putchar('0' + j);
			putchar(' ');
			putchar('0' + k);
			putchar('0' + l);
			if ((num1 == 98) && (num2 == 99))
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

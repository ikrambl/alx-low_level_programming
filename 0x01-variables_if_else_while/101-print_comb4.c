#include <stdio.h>
/**
 * main - a C program printing 3 dig combins
 * Return: 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				if ((a != b) && (a != c) && (b != c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if ((a == '7') && (b == '8') && (c == '9'))
						continue;
						putchar(',');
						putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}



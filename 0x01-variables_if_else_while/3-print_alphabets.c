#include <stdio.h>
/**
 * main - a C program printing alphabets
 * Return: 0 (success)
*/
int main(void)
{
	int l = 97;
	int U = 65;

	for (l = 97 ; l <= 122 ; l++)
{
	putchar(l);
}
for (U = 65 ; U <= 90 ; U++)
{
	putchar(U);
}
putchar ('\n');
return (0);
}

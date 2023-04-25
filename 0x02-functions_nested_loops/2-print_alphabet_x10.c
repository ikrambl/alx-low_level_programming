#include "main.h"
/**
 * print_alphabet_x10 - print it 10 times
 */
void print_alphabet_x10(void)
{
char alph;
int a;

for (a = 0; a < 10; a++)
{
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
}
}

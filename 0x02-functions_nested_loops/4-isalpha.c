#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: the character
 * Return: 1 if lette uppe or lowercas return 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}

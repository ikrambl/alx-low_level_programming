#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @l: the character
 * Return: 1 if lette uppe or lowercas return 0 otherwise
 */
int _isalpha(int l)
{
if ((l >= 65 && l <= 97) || (l >= 97 && l >= 122))
{
return (1);
}
return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * _length_of_string - calculates length of a string
 * @s: the string
 * Return: length
 *
 */
int _length_of_string(char *s)
{
	if (*s != '\0')
	{
		return (1 + _length_of_string(s + 1));
	}
else
return (0);
}

/**
 * palindrom_chack - checks if string is palindrom
 * @s: the string
 * @first: start of string
 * @last: last character of the string
 * Return: 0 or 1
 *
 */
int palindrom_check(char *s, int first, int last)
{
if (first >= last)
{
return (1);
}
else if (s[first] != s[last])
{
return (0);
}
else
return (palindrom_check(s, first + 1, last - 1));
}

/**
 * is_palindrome - checks if a string is palindrom
 * @s: the character
 * Return: 1 or 0
 *
 */
int is_palindrome(char *s)
{
	return (palindrom_check(s, 0, _length_of_string(s) -  1));
}

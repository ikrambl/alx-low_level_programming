#include "main.h"
#include <stdio.h>

/**
 * compare_strings - checks if the two strings are identical
 * @s1: first string
 * @s2: second string
 * Return: 0 or 1
 */
int compare_strings(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		else if (*s1 == '\0')
		{
			return (compare_strings(s1, s2 + 1));
		}
		return (compare_strings(s1 + 1, s2) || compare_strings(s1, s2 + 1));
	}
	else if (*s1 != *s2)
	{
		return (0);
	}
return (compare_strings(s1 + 1, s2 + 1));
}

/**
 * wildcmp - checks if two strings are identical
 * @s1: The first string.
 * @s2: The second string
 *
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
return (compare_strings(s1, s2));
}


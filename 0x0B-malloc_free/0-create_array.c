#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *chars = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

if (chars == NULL)
{
	return (NULL);
}
for (a = 0; a < size; a++)
{
	chars[a] = c;
}
return (chars);
}


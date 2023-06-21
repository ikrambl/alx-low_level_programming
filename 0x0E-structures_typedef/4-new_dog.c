#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that finds string length
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
int j;

for (i = 0; *(src + i) != '\0'; i++)
{
;
}
j = 0;
while (j < i)
{
dest[j] = src[j];
j++;
}
dest[j] = '\0';
return (dest);
}

/**
 * new_dog - a function creating a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer if sucess, NULL if not.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(_strlen(name) + 1);
	new_dog->owner = malloc(_strlen(owner) + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

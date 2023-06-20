#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure
 * @name:dog's name
 * @age: dog's age
 * @owner: dog owner's name
 *
 * Description: this is a fog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

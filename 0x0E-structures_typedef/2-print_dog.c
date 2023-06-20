#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Dog's Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Dog's Age: %f\n", d->age);
	printf("Dog's Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}

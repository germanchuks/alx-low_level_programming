#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints struct dog
 * @d: Pointer to struct dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *name = d->name == NULL ? "(nil)" : d->name;
		float age = d->age;
		char *owner = d->owner == NULL ? "(nil)" : d->owner;

		printf("Name: %s\nAge: %6f\nOwner: %s\n", name, age, owner);
	}
}

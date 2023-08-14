#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 *
 * Return: Pointer to new_dog, NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL || name == NULL || owner == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	return (new_dog);
}

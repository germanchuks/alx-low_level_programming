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
	int name_len = 0;
	int owner_len = 0;
	int i;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL || name == NULL || owner == NULL)
		return (NULL);
	while (name[name_len] != '\0')
		name_len++;
	new_dog->name = malloc(sizeof(char) * (name_len + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	while (owner[owner_len] != '\0')
		owner_len++;
	new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	i = 0;
	while (i <= name_len)
	{
		new_dog->name[i] = name[i];
		i++;
	}
	i = 0;
	while (i <= owner_len)
	{
		new_dog->owner[i] = owner[i];
		i++;
	}
	new_dog->age = age;
	return (new_dog);
}

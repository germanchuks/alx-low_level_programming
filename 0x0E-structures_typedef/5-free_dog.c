#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory allocated to struct dog.
 * @d: Pointer to struct dog.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

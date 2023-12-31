#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Shows dogs data.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 *
 * Description:
 * This structure shows data for a dog. 'Name' is a pointer of type char and
 * holds the name of the dog as string. 'Age' is of type float and holds the
 * age of the dog. 'Owner' is a pointer of type char and stores the name of the
 * owner as string.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

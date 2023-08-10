#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the previously allocated memory
 * @old_size: Size of space allocated to ptr
 * @new_size: New size of new memory block
 *
 * Return: Pointer to newly created array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_allocated;
	unsigned int i = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		new_allocated = malloc(new_size);
		return (new_allocated);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_allocated = malloc(new_size);

	if (new_allocated == NULL)
	{
		return (NULL);
	}

	if (new_size < old_size)
	{
		old_size = new_size;
	}
	while (i < old_size)
	{
		*((char *)new_allocated + i) = *((char *)ptr + i);
		i++;
	}

	free(ptr);

	return (new_allocated);
}

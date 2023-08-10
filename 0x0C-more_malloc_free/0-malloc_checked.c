#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check the code
 * @b: Memory size to be allocated
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{

	void *mem_alloc = malloc(b);

	if (mem_alloc == NULL)
		exit(98);
	return (mem_alloc);
}

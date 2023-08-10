#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in array
 * @size: Size of each byte
 *
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *nmemb_array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	nmemb_array = (void *)malloc(size * nmemb);

	if (nmemb_array == NULL)
		return (NULL);
	memset(nmemb_array, 0, nmemb * size);
	return (nmemb_array);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates an array of chars
 * @size: Size of array
 * @c: Character to initialize in array
 *
 * Return: Pointer to array, NULL if size is zero.
 */
char *create_array(unsigned int size, char c)
{
	if (size != 0)
	{
		unsigned int i = 0;
		char *array = (char *)malloc(sizeof(char) * size);

		if (array == NULL)
		{
			return (NULL);
		}
		while (i < size)
		{
			array[i] = c;
			i++;
		}
		return (array);
	}

	return (NULL);
}

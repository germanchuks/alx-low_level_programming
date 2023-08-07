#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the new string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	if (str != NULL)
	{
		unsigned int count = 0;
		unsigned int i = 0;
		char *dupl_str;

		while (str[count])
			count++;

		dupl_str = (char *)malloc(sizeof(char) * (count + 1));
		if (dupl_str == NULL)
			return (NULL);
		while (i <= count)
		{
			dupl_str[i] = str[i];
			i++;
		}
		return (dupl_str);
	}
	return (NULL);
}

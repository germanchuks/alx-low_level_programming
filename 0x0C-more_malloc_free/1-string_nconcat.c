#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes for s2
 *
 * Return: Pointer to space in memory containing concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	char *strs_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);

	strs_concat = (char *)malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (strs_concat == NULL)
		return (NULL);

	strcpy(strs_concat, s1);
	while (i < n)
	{
		strs_concat[strlen(s1) + i] = s2[i];
		i++;
	}

	strs_concat[strlen(s1) + n] = '\0';

	return (strs_concat);
}

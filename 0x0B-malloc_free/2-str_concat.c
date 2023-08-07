#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenate two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the joint string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int length;
	char *joint_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length = strlen(s1) + strlen(s2) + 1;
	joint_str = (char *)malloc(sizeof(char) * length);
	if (joint_str == NULL)
	{
		return (NULL);
	}
	strcpy(joint_str, s1);
	strcat(joint_str, s2);
	return (joint_str);
}

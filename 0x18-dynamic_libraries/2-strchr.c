#include "main.h"
#include <string.h>
/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to string to be checked.
 * @c: Character to be found in string.
 *
 * Return: Pointer to first occurence if character is found, NULL if not found
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

#include "main.h"
#include <string.h>
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to string to be searched.
 * @accept: Pointer to character(s) to match against.
 *
 * Return: Pointer to first occurence if character is found, NULL if not found
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

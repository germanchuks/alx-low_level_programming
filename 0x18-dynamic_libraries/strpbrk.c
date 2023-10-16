#include "main.h"
#include <string.h>
/**
 * _strpbrk - Gets the length of a prefix substring.
 * @s: Pointer to string to be searched.
 * @accept: Pointer to character(s) to match against.
 *
 * Return: Pointer to byte in s that matches one of bytes in accept,
 * NULL if none is found
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

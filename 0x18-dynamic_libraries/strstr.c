#include "main.h"
#include <string.h>
/**
 * _strstr - Finds the first occurrence of the substring in a string.
 * @haystack: Pointer to string to be searched.
 * @needle: Pointer to substring to match against.
 *
 * Return: Pointer to beginning of the located substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

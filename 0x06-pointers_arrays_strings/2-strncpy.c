#include <string.h>
/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Appending string
 * @n: Number of bytes in src to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

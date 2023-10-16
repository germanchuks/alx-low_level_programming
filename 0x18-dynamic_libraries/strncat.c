#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenates two strings using n bytes from src
 * @dest: Destination string
 * @src: Appending string
 * @n: Number of bytes in src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

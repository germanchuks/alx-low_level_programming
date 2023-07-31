#include <string.h>
/**
 * _memset - Fills buffer with a constant byte
 * @s: buffer
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: Pointer to buffer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}

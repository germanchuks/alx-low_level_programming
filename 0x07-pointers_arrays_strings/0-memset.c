#include <string.h>
/**
 * _memset - Fills buffer with a constant byte
 * @s: Pointer to buffer
 * @b: constant byte to fill in buffer
 * @n: number of bytes to fill
 *
 * Return: Pointer to buffer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}

#include <string.h>
/**
 * _memcpy - Fills buffer with a constant byte
 * @dest: Pointer to destination memory where data will be copied
 * @src: Pointer to source memory from which data will be copied
 * @n: number of bytes to be copied
 *
 * Return: Pointer to buffer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

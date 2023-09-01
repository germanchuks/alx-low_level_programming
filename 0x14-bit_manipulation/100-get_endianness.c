#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Description: A pointer c is declared and initialized to point to the address
 * unsigned integer value i, so we can examine the individual bytes of the
 * integer as characters. If pointer c is zero, it means the least significant
 * byte is zero, which indicates little endian. Else, the byte at the lowest
 * memory address is non-zero, indicating big endian.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (!*c)
		return (0);
	return (1);
}

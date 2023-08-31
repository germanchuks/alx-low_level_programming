#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Integer number.
 * @index: Index of the bit to set, starting from 0.
 *
 * Return: 1 if successful, or -1 if error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = ~(1 << index) & *n;
	return (1);
}

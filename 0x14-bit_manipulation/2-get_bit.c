#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Integer number to print value.
 * @index: Index of the bit to get, starting from 0.
 *
 * Return: Value of the bit at index, or -1 if error occus.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}

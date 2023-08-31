#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: First integer number.
 * @m: Second integer number.
 *
 * Return: Number of bits needed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;
	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}

#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num_res = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		conv_num_res = (*b - '0') + (conv_num_res * 2);
		b++;
	}
	return (conv_num_res);
}

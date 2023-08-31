#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Integer number to print binary representation.
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}

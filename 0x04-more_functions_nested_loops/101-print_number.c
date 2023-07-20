#include "main.h"
/**
 * print_number - Enry point
 * Description: 'Prints an integer'
 * @n: Number
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	} else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}

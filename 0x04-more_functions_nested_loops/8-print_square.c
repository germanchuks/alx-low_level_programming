#include "main.h"
/**
 * print_square - Enry point
 *
 * Description: 'Prints line n number of times'
 * @size: Size of square
 * Return: Returns 0
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i = 0;

		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	} else
		_putchar('\n');
}

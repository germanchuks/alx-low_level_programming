#include "main.h"
/**
 * print_triangle - Enry point
 *
 * Description: 'Prints a triangle'
 * @size: Size of triangle
 * Return: Returns 0
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 0;

		while (i < size)
		{
			int j = size - i;

			while (j > 1)
			{
				_putchar(' ');
				j--;
			}
			int count = 0;

			while (count <= i)
			{
				_putchar('#');
				count++;
			}
			_putchar('\n');
			i++;
		}
	} else
	_putchar('\n');
}

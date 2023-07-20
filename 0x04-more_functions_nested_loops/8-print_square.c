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
				putchar('#');
				j++;
			}
			putchar('\n');
			i++;
		}
	} else
		putchar('\n');
}

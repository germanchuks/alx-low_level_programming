#include "main.h"
/**
 * print_diagonal - Enry point
 *
 * Description: 'Prints line n number of times'
 * @n: Diagonal count
 * Return: Returns 0
 */
void print_diagonal(int n)
{
	int count = 0;

	if (n > 0)
	{
		while (count < n)
		{
			for (int i = 1; i <= count; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	} else
		_putchar('\n');
}

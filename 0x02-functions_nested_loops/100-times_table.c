#include "main.h"
/**
 * print_times_table - Entry point
 *
 * Description: 'Prints n times table'
 * @n: User number input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j;

	i = 0;
	if (n >= 0 && n <= 15)
		while (i <= n)
		{
			j = 0;

			while (j <= n)
			{
				int mult = j * i;

				if (j != 0)
					_putchar(' ');
				if (mult >= 10 && mult < 100)
				{
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				} else if (mult >= 100)
				{
					_putchar((mult / 100) + '0');
					_putchar(((mult % 100) / 10) + '0');
					_putchar((mult % 10) + '0');
				} else
				{
					if (j != 0)
					{	_putchar(' ');
						_putchar(' ');
					}
					_putchar(mult + '0');
				}
				if (j != n)
					_putchar(',');
				j++;
			}
			_putchar('\n');
			i++;
		}
}

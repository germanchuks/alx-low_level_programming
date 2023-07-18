#include "main.h"
/**
 * times_table - Entry point
 *
 * Description: 'Prints 9 times table'
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j;

	i = 0;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			int mult = j * i;

			if (mult >= 10)
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			} else
			{
				_putchar(mult + '0');
				if (j != 0)
				{
					_putchar(' ');
				}
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

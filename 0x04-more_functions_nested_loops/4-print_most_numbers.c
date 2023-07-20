#include "main.h"
/**
 * print_most_numbers - Enry point
 *
 * Description: 'Prints numbers from 0 to 9 except 2 and 4'
 *
 * Return: Returns 0
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}
		i++;
	}
	putchar('\n');
}

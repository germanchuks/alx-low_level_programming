#include "main.h"
/**
 * print_line - Enry point
 *
 * Description: 'Prints line n number of times'
 * @n: Line count
 * Return: Returns 0
 */
void print_line(int n)
{
	int count = 0;

	if (n > 0)
	{
		while (count < n)
		{
			putchar('_');
			count++;
		}
	}
	putchar('\n');
}

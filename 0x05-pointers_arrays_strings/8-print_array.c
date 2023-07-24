#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers.
 *
 * @a: Array
 * @n: Number of elements
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i, count = n - 1;

	while (i <= count)
	{
		printf("%d", a[i]);
		if (i != count)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
}

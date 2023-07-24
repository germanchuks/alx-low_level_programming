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
	int i;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');

}

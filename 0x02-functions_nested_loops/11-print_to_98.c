#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 *
 * Description: 'Prints all natural numbers from n to 98'
 * @n: User number input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int target = 98;

	if (n >= target)
	{
		while (n > target)
		{
			printf("%d, ", n);
			n--;
		}
	} else if (n < target)
	{
		while (n < target)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("98\n");
}

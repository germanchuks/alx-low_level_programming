#include <string.h>
/**
 * print_diagsums - Prints the sum of two diagonals of a square
 * matrix of integers.
 * @a: Square matrix
 * @size: Matrix size
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int maxIndex = size * size;

	/*Calculate sum of first diagonal*/
	int index = 0;
	int incr = size + 1;

	while (index <= maxIndex)
	{
		sum1 = sum1 + a[index];
		index = index + incr;
	}

	/*Calculate sum of second diagonal*/
	incr = size - 1;
	index = incr;
	maxIndex = maxIndex - incr;
	while (index <= maxIndex)
	{
		sum2 = sum2 + a[index];
		index = index + incr;
	}

	printf("%d, %d\n", sum1, sum2);
}

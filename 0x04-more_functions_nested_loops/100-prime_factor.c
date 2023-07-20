#include <stdio.h>
/**
 * main - Enry point
 *
 * Description: 'Find prime factors'
 *
 * Return: Returns 0
 */
int main(void)
{
	unsigned long i, num = 612852475143;

	for (i = 3; i < 782849; i += 2)
	{
		while ((n % i == 0) && (n != i))
		{
			n = n / i;
		}
	}
	printf("%lu\n", n);
	return (0);
}

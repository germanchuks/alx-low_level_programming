#include <stdio.h>
#include <math.h>
/**
 * main - Enry point
 *
 * Description: 'Find prime factors'
 *
 * Return: Returns 0
 */
int main(void)
{
	long int i;
	long int max = -1;
	long int num = 612852475143;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			max = i;
			num = num / i;
		}
	}
	if (num > 2)
		max = num;

	printf("%ld\n", max);
	return (0);
}

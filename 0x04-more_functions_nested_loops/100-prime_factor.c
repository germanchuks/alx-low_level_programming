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
	long int num = 612852475143;
	int i = 3;

	/*Check for 2's that are prime factors*/
	while (num % 2 == 0)
	{
		printf("%d\n", 2);
		num /= 2;
	}
	/*Check odd number prime factors*/
	while (i * i <= num)
	{
		while (num % i == 0)
		{
			printf("%d\n", i);
			num /= i;
		}
		i += 2;
	}
	/*The remainder is a prime factor*/
	if (num > 2)
	{
		printf("%ld\n", num);
	}
	return (0);
}

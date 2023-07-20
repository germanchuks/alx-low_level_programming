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
	long long int num = 612852475143;
	/*Check for 2's that are prime factors*/
	while (num % 2 == 0)
	{
		printf("%d\n", 2);
		num /= 2;
	}
	/*Check odd number prime factors*/
	for (long long int i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			printf("%lld\n", i);
			num /= i;
		}
	}
	/*The remainder is a prime factor*/
	if (num > 2)
	{
		printf("%lld\n", num);
	}
	return (0);
}

#include <stdio.h>
#include "main.h"
/**
 * main - Enry point
 *
 * Description: 'Fizz-Buzz test'
 *
 * Return: Returns 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
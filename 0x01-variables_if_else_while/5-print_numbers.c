# include <stdio.h>
# include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'Prints all single digits of base 10'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%i", number);
		number++;
	}
	puts("\n");

	return (0);
}

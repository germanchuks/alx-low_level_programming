# include <stdio.h>
# include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'Prints all single digits of base 10 using putchar'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');

	return (0);
}

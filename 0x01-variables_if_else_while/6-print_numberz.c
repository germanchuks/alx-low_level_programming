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
	for (int i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');

	return (0);
}

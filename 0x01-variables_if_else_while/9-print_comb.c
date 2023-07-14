#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'Prints all combinations of number 1-9'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Prints possible combinations of two digits'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = i;

		while (j < 10)
		{
			if (i != j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

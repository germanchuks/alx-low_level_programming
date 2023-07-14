#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Prints possible combinations of three digits'
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
				int k = j;

				while (k < 10)
				{
					if (j != k)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar('0' + k);
						if (i != 7)
						{
							putchar(',');
							putchar(' ');
						}
					}
					k++;
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

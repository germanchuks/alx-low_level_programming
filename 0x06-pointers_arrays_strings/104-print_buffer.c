#include <stdio.h>
/**
 * print_buffer - Prints a buffer
 * @b: String
 * @size: Size of string
 * Return: Nothing
 */
void print_buffer(char *b, int size)
{
	int count = (size / 10), i = 0;

	if (size > 0)
	{
		while (i <= count)
		{
			int j = i * 10, k = i * 10;

			printf("%08x:", i * 10);
			while (j < (i * 10) + 10)
			{
				if (j == size)
				{
					printf("%10s", " ");
					break;
				}
				if (j % 2 == 0)
					printf(" ");
				if (b[j] == '\0')
					printf("%02d", 0);
				else if (j < size - 1)
					printf("%02x", b[j]);
				j++;
			}
			printf(" ");
			while (k < (i * 10) + 10)
			{
				if (k == size)
					break;
				if ((b[k] >= 00 && b[k] <= 07) || b[k] == '\n' || b[k] == '\0')
					printf(".");
				else if (k < size - 1)
					printf("%c", b[k]);
				k++;
			}
			printf("\n");
			i++;
		}
	} else
		print("\n");
}

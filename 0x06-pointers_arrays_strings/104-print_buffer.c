#include <stdio.h>
/**
 * print_buffer - Prints a buffer
 * @b: String
 * @size: Size of string
 * Return: Nothing
 */
void print_buffer(char *b, int size)
{
	int count = (size / 10);

	for (int i = 0; i <= count; i++)
	{
		printf("%08x:", i * 10);
		for (int j = i * 10; j < (i * 10) + 10; j++)
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
		}
		printf(" ");
		for (int j = i * 10; j < (i * 10) + 10; j++)
		{
			if (j == size)
				break;
			if ((b[j] >= 00 && b[j] <= 07) || (b[j] == '\n' || b[j] == '\0'))
				printf(".");
			else if (j < size - 1)
				printf("%c", b[j]);
		}
		printf("\n");
	}
}

#include <stdio.h>
/**
 * print_line - prints bytes of a buffer
 * @buff: buffer to print
 * @line: buffer line to print
 * @buff_size: number of bytes to print
 *
 * Return: Nothing
 */

void print_line(char *buff, int line, int buff_size)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= buff_size)
			printf("%02x", buff[line * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			printf(" ");
	}
	for (k = 0; k <= buff_size; k++)
	{
		if (buff[line * 10 + k] > 31 && buff[line * 10 + k] < 127)
			printf("%c", buff[line * 10 + k]);
		else
			printf(".");
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, i, 9);
		}
		else
		{
			print_line(b, i, size % 10 - 1);
		}
		printf("\n");
	}
	if (size == 0)
		printf("\n");
}

#include "main.h"
#include <string.h>
/**
 * print_rev - Reverses string
 *
 * @s: String
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int str_len = strlen(s);
	char str_array[50];
	int i = str_len;

	strcpy(str_array, s);

	while (i >= 0)
	{
		_putchar(str_array[i]);
		i--;
	}
}

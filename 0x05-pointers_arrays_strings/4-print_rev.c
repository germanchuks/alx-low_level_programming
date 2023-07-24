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
	int i = str_len;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

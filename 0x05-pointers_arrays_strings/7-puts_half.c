#include "main.h"
#include <string.h>
/**
 * puts_half - Prints half of string
 *
 * @str: String
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int len_str = strlen(str);
	int start_point = len_str / 2;
	int i;

	if (len_str % 2 == 0)
	{
		i = start_point;
	}

	if (len_str % 2 != 0)
	{
		i = start_point + 1;
	}

	while (i <= len_str)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

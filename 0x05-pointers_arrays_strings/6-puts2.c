#include "main.h"
#include <string.h>
/**
 * puts2 - Reverses string
 *
 * @str: String
 * Return: Nothing.
 */
void puts2(char *str)
{
	int len_str = strlen(str) - 1;
	int i = 0;

	while (i <= len_str)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

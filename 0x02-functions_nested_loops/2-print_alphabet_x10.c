#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'Prints 10x lowercase alphabets'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}

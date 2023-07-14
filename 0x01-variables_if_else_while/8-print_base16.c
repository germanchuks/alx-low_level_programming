#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'Prints base 16 numbers in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';
	char letters = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');

	return (0);
}

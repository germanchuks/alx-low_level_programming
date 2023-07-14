# include <stdio.h>
# include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'Prints the lowercase alphabets followed by new line'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	return (0);
}

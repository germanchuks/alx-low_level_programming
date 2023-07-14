# include <stdio.h>
# include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'Prints lower case letters except q and e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower, upper;

	lower = 'a';
	upper = 'A';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}

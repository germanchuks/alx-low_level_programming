#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'Print _putchar'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char message[] = "_putchar";
	int length = strlen(message);
	int count = 0;

	while (count < length)
	{
		putchar(message[count]);
		count++;
	}
	putchar('\n');
	return (0);
}

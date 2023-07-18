#include <string.h>
#include "main.h"
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
		_putchar(message[count]);
		count++;
	}
	_putchar('\n');
	return (0);
}

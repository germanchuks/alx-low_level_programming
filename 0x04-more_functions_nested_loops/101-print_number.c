#include "main.h"
/**
 * print_number - Enry point
 * Description: 'Prints an integer'
 * @n: Diagonal count
 * Return: Returns 0
 */
void print_number(int n)
{
	int revNum = 0;
	int count = 0;
	int tempNum = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (tempNum > 0)
	{
		tempNum /= 10;
		count++;
	}

	/*Reverse the digits*/
	while (count > 0)
	{
		int digit = n % 10;

		revNum = revNum * 10 + digit;
		n /= 10;
		count--;
	}

	while (revNum > 0)
	{
		int digit = revNum % 10;

		_putchar(digit + '0');
		revNum /= 10;
	}
}

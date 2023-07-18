#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * Description: 'Prints last digit of a number'
 * @num: 'Number to be computed'
 * Return: Always 0 (Success)
 */
int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = num % 10;
	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}

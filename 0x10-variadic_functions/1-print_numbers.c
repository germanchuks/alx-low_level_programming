#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Return: The sum of the parameters. 0 if n is equal to zero.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg;

	va_start(arg, n);
	while (i < n)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}
	_putchar('\n');
	va_end(arg);
}

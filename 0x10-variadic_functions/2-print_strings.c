#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function.
 *
 * Return: The sum of the parameters. 0 if n is equal to zero.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list arg;

	va_start(arg, n);
	while (i < n)
	{
		str = va_arg(arg, char*);
		printf("%s", str == NULL ? "(nil)" : str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}
	_putchar('\n');
	va_end(arg);
}

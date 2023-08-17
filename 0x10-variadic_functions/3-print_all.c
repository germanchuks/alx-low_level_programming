#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything.
 * @format: List of types of arguments passed to the function.
 *
 * Return: The sum of the parameters. 0 if n is equal to zero.
 */
void print_all(const char *const format, ...)
{
	unsigned int i = 0;
	char *s;
	char *separator = "";
	va_list arg;

	va_start(arg, format);
	while (format[i])
	{
		if (format)
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%i", separator, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arg, double));
					break;
				case 's':
				{
					s = va_arg(arg, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				}
			}
			separator = ", ";
			i++;
		}
	}
	putchar('\n');
	va_end(arg);
}

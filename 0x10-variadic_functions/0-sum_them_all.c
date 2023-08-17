#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Sums all of its parameters
 * @n: Number of parameters.
 *
 * Return: The sum of the parameters. 0 if n is equal to zero.
 */
int sum_them_all(const unsigned int n, ...)
{

	int result = 0;
	unsigned int i = 0;
	int x;
	va_list arg;

	va_start(arg, n);
	if (n == 0)
		return (0);

	while (i < n)
	{
		x = va_arg(arg, int);
		result = result + x;
		i++;
	}
	va_end(arg);
	return (result);
}

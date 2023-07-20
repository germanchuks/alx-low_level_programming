#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Enry point
 *
 * Description: 'Checks for uppercase character'
 * @c: Variable to be checked
 * Return: Returns 1 if isdigit is true and 0 if false
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}

#include "main.h"
#include <ctype.h>
/**
 * _isupper - Enry point
 *
 * Description: 'Checks for uppercase character'
 * @c: Variable to be checked
 * Return: Returns 1 if isupper is true and 0 if false
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}

#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 *
 * Description: 'Checks for alphabetic character'
 * @c: Character to be checked
 * Return: 1 if lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}

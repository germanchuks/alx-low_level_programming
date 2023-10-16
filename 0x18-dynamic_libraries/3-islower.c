#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 *
 * Description: 'Checks for lowercase character'
 * @c: Character to be checked
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	} else
		return (0);
}

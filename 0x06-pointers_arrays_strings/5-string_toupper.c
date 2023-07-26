#include <string.h>
/**
 * string_toupper - Converts lowercase letters to uppercase
 * @n: String
 * Return: n
 */
char *string_toupper(char *n)
{
	int i = 0;
	int length = strlen(n);

	while (i < length)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			{n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}

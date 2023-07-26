#include <string.h>
/**
 * cap_string - Capitalizes all words of a string
 * @n: String
 * Return: string
 */
char *cap_string(char *n)
{
	int i = 0;
	const char separators[] = " \t\n.:;!\"?(){}";

	if (n[i] >= 'a' && n[i] <= 'z')
	{
		n[i] = n[i] - 32;
	}

	i++;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			if (strchr(separators, n[i - 1]) != NULL)
			{
				n[i] = n[i] - 32;
			}
		}
		i++;
	}
	return (n);
}

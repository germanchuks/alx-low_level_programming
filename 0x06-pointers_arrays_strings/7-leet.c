#include <string.h>
/**
 * leet - Encodes strings
 * @n: String
 * Return: string
 */
char *leet(char *n)
{
	int length = strlen(n);
	int i = 0;

	char decoded[] = "aAeEoOtTlL";
	char encoded[] = "4433007711";

	while (i < length || strchr(encoded, n[i]) != NULL)
	{
		int j = 0;

		while (j < 10)
		{
			if (n[i] == decoded[j])
			{
				n[i] = encoded[j];
			}
			j++;
		}
		i++;
	}
	return (n);
}

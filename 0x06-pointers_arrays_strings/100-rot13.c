#include <string.h>
/**
 * rot13 - Encodes strings using rot13
 * @n: String
 * Return: string
 */
char *rot13(char *n)
{
	int i = 0;
	int str_len = strlen(n);

	while (i <= str_len)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = (n[i] - 'a' + 13) % 26 + 'a';
		}
		else if (n[i] >= 'A' && n[i] <= 'Z')
		{
			n[i] = (n[i] - 'A' + 13) % 26 + 'A';
		}
		i++;
	}
	return (n);
}

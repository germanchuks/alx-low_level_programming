#include <string.h>
/**
 * rot13 - Encodes strings using rot13
 * @n: String
 * Return: string
 */
char *rot13(char *n)
{
	int i = 0;
	char letters[] = "ABCDEDGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_letters[] = "NOPQRSTUVWXYZABCDEDGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (n[i] != '\0')
	{
		int j = 0;

		while (j < 52)
		{
			if (n[i] == letters[j])
			{
				n[i] = rot_letters[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (n);
}

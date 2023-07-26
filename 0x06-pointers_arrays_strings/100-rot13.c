#include <string.h>
/**
 * rot13 - Encodes strings using rot13
 * @n: String
 * Return: string
 */
char *rot13(char *n)
{
	char letters[] = "ABCDEDGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_letters[] = "NOPQRSTUVWXYZABCDEDGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (int i = 0; n[i] != '\0'; i++)
	{
		for (int j = 0; j < 52; j++)
		{
			if (n[i] == letters[j])
			{
				n[i] = rot_letters[j];
				break;
			}
		}
	}
	return (n);
}

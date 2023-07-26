#include "main.h"
/**
 * rot13 - Encodes strings using rot13
 * @n: String
 * Return: encoded string
 */
char *rot13(char *n)
{
	int i, j;
	char *str_letters = "abcdefghijklmnopqrstuvwxyzABCDEDGHIJKLMNOPQRSTUVWXYZ";
	char *rot_letters = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEDGHIJKLM";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; str_letters[j] != '\0'; j++)
		{
			if (n[i] == str_letters[j])
			{
				n[i] = rot_letters[j];
				break;
			}
		}
	}
	return (n);
}

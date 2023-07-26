#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes strings using rot13
 * @n: String
 * Return: encoded string
 */
char *rot13(char *n)
{
	char str_letters[] = "ABCDEDGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_letters[] = "NOPQRSTUVWXYZABCDEDGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = n;

	while (*n)
	{
		int i = 0;

		while (i <= 52)
		{
			if (*n == str_letters[i])
			{
				*n = rot_letters[i];
				break;
			}
			i++;
		}
		n++;
	}
	return (ptr);
}

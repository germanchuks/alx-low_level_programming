#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes strings using rot13
 * @n: String
 * Return: encoded string
 */
char *rot13(char *n)
{
	char letters[] = "ABCDEDGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_letters[] = "NOPQRSTUVWXYZABCDEDGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = n;

	while (*n)
	{
		int j = 0;

		while (j <= 52)
		{
			if (*n == letters[j])
			{
				*n = rot_letters[j];
				break;
			}
			j++;
		}
		n++;
	}
	return (ptr);
}

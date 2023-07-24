#include "main.h"
#include <string.h>
/**
 * rev_string - Reverses string
 *
 * @s: String
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int arr_len = strlen(s);
	int i = 0;
	int j = arr_len - 1;

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: Argument count.
 * @av: Arguments.
 *
 * Return: Pointer to concatenated strings, NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int length = 0;
	char *concat_str;

	if (ac != 0 && av != NULL)
	{
		while (i < ac)
		{
			length += strlen(av[i]);
			i++;
		}

		concat_str = (char *)malloc(sizeof(char) * (length + ac + 1));

		if (concat_str == NULL)
			return (NULL);

		concat_str[0] = '\0';

		for (i = 0; i < ac; i++)
		{
			strcat(concat_str, av[i]);
			if (i != ac - 1)
			{
				strcat(concat_str, "\n");
			}
		}

		return (concat_str);
	}
	return (NULL);
}

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
	int i = 0;
	int length = 0;
	char *concat_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		length += strlen(av[i]);
		i++;
	}

	concat_str = (char *)malloc(sizeof(char) * (length + ac + 1));

	if (concat_str == NULL)
		return (NULL);

	concat_str[0] = '\0';

	i = 0;
	while (i < ac)
	{
		strcat(concat_str, av[i]);
		strcat(concat_str, "\n");
		i++;
	}
	return (concat_str);
}

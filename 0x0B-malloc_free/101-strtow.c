#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * count_words - Counts number of words in string
 * @str: String to count.
 * Return: Number of words.
 */
int count_words(char *str)
{
	int i = 0, count = 0;

	while (str[i])
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
		if (str[i])
			i++;
	}
	return (count);
}
/**
 * allocate_mem - Allocates memory to store words.
 * @count: Number of words.
 * Return: Words
 */
char **allocate_mem(int count)
{
	char **words = (char **)malloc((count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);
	words[count] = NULL;
	return (words);
}
/**
 * free_memory - Frees allocated memory
 * @words: Words.
 * @count: Number of words.
 * Return: Nothing.
 */
void free_memory(char **words, int count)
{
	while (count > 0)
	{
		free(words[--count]);
	}
	free(words);
}
/**
 * strtow - Splits a string into words
 * @str: String to split.
 * Return: Pointer to array of words, NULL if it fails.
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k, len = strlen(str), count = count_words(str);
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = allocate_mem(count);

	if (count == 0)
		return (NULL);

	i = j = 0;
	while (i < len)
	{
		if (str[i] != ' ')
		{
			k = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
				k++;
			}
			words[j] = (char *)malloc((k + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				free_memory(words, j);
				return (NULL);
			}
			strncpy(words[j], str + i - k, k);
			words[j++][k] = '\0';
		}
		i++;
	}
	return (words);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds two numbers
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 if numbers can be added, 1 if otherwise.
 */
int main(int argc, char **argv)
{
	int i = 0;
	int count = 1;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (count < argc)
	{
		while (argv[count][i])
		{
			if (!isdigit(argv[count][i]))
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}

		result = result + atoi(argv[count]);
		count++;
	}
	printf("%d\n", result);
	return (0);
}

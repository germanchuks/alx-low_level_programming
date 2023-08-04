#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds two numbers
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 if argc is equal to 3, 1 if otherwise.
 */
int main(int argc, char **argv)
{
	int count = 1;
	int result;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	while (count < argc)
	{
		if (!isdigit(*argv[count]))
		{
			printf("Error\n");
			return (1);
		}

		result = result + atoi(argv[count]);
		count++;
	}
	printf("%d\n", result);
	return (0);
}

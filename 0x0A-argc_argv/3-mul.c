#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 if argc is equal to 3, 1 if otherwise.
 */
int main(int argc, char **argv)
{
	int result;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	result = a * b;
	printf("%d\n", result);
	return (0);
}

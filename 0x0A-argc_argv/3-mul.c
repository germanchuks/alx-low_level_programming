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
	int result, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	result = a * b;
	printf("%d\n", result);
	return (0);
}

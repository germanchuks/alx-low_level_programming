#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int a, b;
	char *operator;
	int (*operation)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator= argv[2];

	operation = get_op_func(operator);

	if (operation)
	{
		if ((*operator== '/' || * operator== '%') && (b == 0))
		{
			printf("Error\n");
			exit(100);
		}
		result = operation(a, b);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}

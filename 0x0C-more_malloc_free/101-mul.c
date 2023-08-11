#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * checkForZero - determines if any number is zero
 * @argv: argument vector.
 * Return: no return.
 */
void checkForZero(char *argv[])
{
	int i, isNum1Zero = 1, isNum2Zero = 1;

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] != '0')
		{
			isNum1Zero = 0;
			break;
		}
	}
	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] != '0')
		{
			isNum2Zero = 0;
			break;
		}
	}
	if (isNum1Zero || isNum2Zero)
	{
		printf("0\n");
		exit(0);
	}
}
/**
 * initializeArray - set new array memory
 * @array: Array.
 * @length: Length of the array.
 * Return: pointer of a char array.
 */
char *initializeArray(char *array, int length)
{
	int i = 0;

	for (i = 0; i < length; i++)
	{
		array[i] = '0';
	}
	array[length] = '\0';
	return (array);
}
/**
 * getNumLength - determines number length and checks if it is base 10.
 * @argv: arguments vector.
 * @index: row of the array.
 * Return: length of the number.
 */
int getNumLength(char *argv[], int index)
{
	int length;

	for (length = 0; argv[index][length]; length++)
	{
		if (!isdigit(argv[index][length]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (length);
}

/**
 * main - Entry point.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int lenNum1, lenNum2, lenResult, add, carry, i, j, k, shiftCount;
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	lenNum1 = getNumLength(argv, 1);
	lenNum2 = getNumLength(argv, 2);
	checkForZero(argv);
	lenResult = lenNum1 + lenNum2;
	result = malloc(lenResult + 1);
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	result = initializeArray(result, lenResult);
	k = lenResult - 1;
	i = lenNum1 - 1;
	j = lenNum2 - 1;
	carry = shiftCount = 0;
	while (k >= 0)
	{
		if (i < 0)
		{
			if (carry > 0)
			{
				add = (result[k] - '0') + carry;
				if (add > 9)
					result[k - 1] = (add / 10) + '0';
				result[k] = (add % 10) + '0';
			}
			i = lenNum1 - 1;
			j--;
			carry = 0;
			shiftCount++;
			k = lenResult - (1 + shiftCount);
		}
		if (j < 0)
		{
			if (result[0] != '0')
				break;
			lenResult--;
			free(result);
			result = malloc(lenResult + 1);
			result = initializeArray(result, lenResult);
			k = lenResult - 1;
			i = lenNum1 - 1;
			j = lenNum2 - 1;
			carry = shiftCount = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (result[k] - '0') + carry;
			carry = add / 10;
			result[k] = (add % 10) + '0';
		}
		k--;
		i--;
	}
	printf("%s\n", result);
	free(result);
	return (0);
}


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
 * initArr - set new array memory
 * @array: Array.
 * @length: Length of the array.
 * Return: pointer of a char array.
 */
char *initArr(char *array, int length)
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
	int lNum1, lNum2, lRslt, add, carry, i, j, k, shCnt;
	char *rslt;

	if (argc != 3)
		printf("Error\n"), exit(98);
	lNum1 = getNumLength(argv, 1), lNum2 = getNumLength(argv, 2);
	checkForZero(argv), lRslt = lNum1 + lNum2, rslt = malloc(lRslt + 1);
	if (rslt == NULL)
		printf("Error\n"), exit(98);
	rslt = initArr(rslt, lRslt), k = lRslt - 1, i = lNum1 - 1;
	j = lNum2 - 1, carry = shCnt = 0;
	while (k >= 0)
	{
		if (i < 0)
		{
			if (carry > 0)
			{
				add = (rslt[k] - '0') + carry;
				if (add > 9)
					rslt[k - 1] = (add / 10) + '0';
				rslt[k] = (add % 10) + '0';
			}
			i = lNum1 - 1, j--, carry = 0, shCnt++, k = lRslt - (1 + shCnt);
		}
		if (j < 0)
		{
			if (rslt[0] != '0')
				break;
			lRslt--, free(rslt), rslt = malloc(lRslt + 1), rslt = initArr(rslt, lRslt);
			k = lRslt - 1, i = lNum1 - 1, j = lNum2 - 1, carry = shCnt = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (rslt[k] - '0') + carry;
			carry = add / 10, rslt[k] = (add % 10) + '0';
		}
		k--, i--;
	}
	printf("%s\n", rslt), free(rslt);
	return (0);
}


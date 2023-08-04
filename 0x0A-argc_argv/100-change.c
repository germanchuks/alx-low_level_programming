#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins to make change
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 if success, 1 if otherwise.
 */
int main(int argc, char **argv)
{
	int i = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int cents, num_coins;
	int minimum_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = sizeof(coins) / sizeof(coins[0]);

	while (i < num_coins)
	{
		minimum_coins += (cents / coins[i]);
		cents %= coins[i];
		i++;
	}

	printf("%d\n", minimum_coins);

	return (0);
}

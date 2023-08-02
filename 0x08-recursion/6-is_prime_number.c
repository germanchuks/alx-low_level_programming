/**
 * isDivisible - Checks if divisor is prime
 * @n: Input integer
 * @divisor: Divisor
 *
 * Return: Returns 1 if true, 0 if false
 */
int isDivisible(int n, int divisor)
{
	if (divisor == 1)
		return (0);
	else if (divisor == 2)
		return (1);
	else if (n % divisor == 0)
		return (0);
	return (isDivisible(n, divisor - 1));
}
/**
 * is_prime_number - Determines if an input integer is a prime number
 * @n: Input integer
 *
 * Return: Returns 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else if (n <= 1)
		return (0);
	return (isDivisible(n, n - 1));
}

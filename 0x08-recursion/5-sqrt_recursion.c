/**
 * _calc_sqrt - Computes the square root recursively within a range.
 * @n: Number to compute square root
 * @min: Minimum range value
 * @max: Maximum range value
 * Return: Returns square root, or -1 if n does not have a natural square root.
 */
int _calc_sqrt(long n, int min, int max)
{
	if (min <= max)
	{
		int mid = min + (max - min) / 2;
		int div = n / mid;

		if (mid == div)
			return (mid);
		else if (mid < div)
			return (_calc_sqrt(n, mid + 1, max));
		else
			return (_calc_sqrt(n, min, mid - 1));
	}
	return (-1);
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to compute square root
 *
 * Return: Returns square root, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	int result = _calc_sqrt(n, 0, n);

	return ((result * result == n) ? result : -1);
}

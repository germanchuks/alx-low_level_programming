/**
 * _calc_sqrt - Computes the square root recursively within a range.
 * @n: Number to compute square root
 * @min: Minimum range value
 * @max: Maximum range value
 * Return: Returns square root, or -1 if n does not have a natural square root.
 */
int _calc_sqrt(int n, int min, int max)
{
	if (min <= max)
	{
		int mid = min + (max - min) / 2;
		int square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			return (_calc_sqrt(n, mid + 1, max));
		}
		else
		{
			return (_calc_sqrt(n, min, mid - 1));
		}
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
	return (_calc_sqrt(n, 0, n));
}

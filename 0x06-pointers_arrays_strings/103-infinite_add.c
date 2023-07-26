/**
 * infinite_add - Adds two numbers
 * @n1: Number 1
 * @n2: Number 2
 * @r: Buffer to store result
 * @size_r: Size of buffer
 * Return: Pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	int length = 0, count, first_digit, second_digit, carry = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		length = i;
	else
		length = j;
	if (length + 1 > size_r)
		return (0);
	r[length] = '\0';
	for (count = length - 1; count >= 0; count--)
	{
		i--;
		j--;
		if (i >= 0)
			first_digit = n1[i] - '0';
		else
			first_digit = 0;
		if (j >= 0)
			second_digit = n2[j] - '0';
		else
			second_digit = 0;
		r[count] = (first_digit + second_digit + carry) % 10 + '0';
		carry = (first_digit + second_digit + carry) / 10;
	}
	if (carry == 1)
	{
		r[length + 1] = '\0';
		if (length + 2 > size_r)
			return (0);
		while (length-- >= 0)
			r[length + 1] = r[length];
		r[0] = carry + '0';
	}
	return (r);
}

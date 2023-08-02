/**
 * check_wildcmp - Compares strings and check wildcards
 * @s1: Input string
 * @s2: Input string with special characters
 *
 * Return: Returns 1 if strings are identical, 0 if false
 */
int check_wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		/*Skip consecutive '*' characters in s2*/
		if (*s1 == '\0')
			return (check_wildcmp(s1, s2 + 1));
		/* Checks the remaining part of s1 for possible matches with s2 after '*'*/
		if (check_wildcmp(s1, s2 + 1))
			return (1);
		/*Continues with the next character in s1*/
		return (check_wildcmp(s1 + 1, s2));
	}
	/*If s1 is empty, and s2 is also empty, returns 1, otherwise returns 0*/
	if (*s1 == '\0')
		return (*s2 == '\0');
	/*Checks next characters*/
	if (*s1 == *s2)
		return (check_wildcmp(s1 + 1, s2 + 1));
	return (0);
}
/**
 * wildcmp - Compares and determines if two strings are identical.
 * @s1: Input string
 * @s2: Input string with special characters
 *
 * Return: Returns 1 if true, 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	return (check_wildcmp(s1, s2));
}

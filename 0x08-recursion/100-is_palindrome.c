#include <string.h>
/**
 * checkPalindrome - Determines if a string is a palindrome recursively
 * @s: Input string
 * @min: Character from left side
 * @max: Character from right side
 *
 * Return: Returns 1 if true, 0 if false
 */
int checkPalindrome(char *s, int min, int max)
{
	if (min >= max)
		return (1);
	if (s[min] != s[max])
		return (0);
	return (checkPalindrome(s, min + 1, max - 1));
}
/**
 * is_palindrome - Determines if a string is a palindrome
 * @s: Input string
 *
 * Return: Returns 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	int _strLen = strlen(s);

	return (checkPalindrome(s, 0, _strLen - 1));
}

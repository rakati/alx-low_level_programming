#include "main.h"

/**
 * check_pal - check if palindrome recursively
 *
 * @r: An Integer.
 * @l: An Integer.
 * @s: Array of char.
 * Return: 1 if palindrome otherwise 0.
 */
int check_pal(int r, int l, char *s)
{
	if (r >= l)
		return (1);
	if (s[l] != s[r])
		return (0);
	return (check_pal(r + 1, l - 1, s));
}

/**
 * _strlen_recursion - calculate length of string recursively
 *
 * @s: Array of char.
 * Return: integer length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * is_palindrome - check string is palindrome or not
 *
 * @s: Array of char.
 * Return: 1 if palindrome otherwise 0.
 */
int is_palindrome(char *s)
{
	int n;

	n = _strlen_recursion(s);
	return (check_pal(0, n - 1, s));
}

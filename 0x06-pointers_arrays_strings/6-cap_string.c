#include "main.h"

/**
 * _instring - check if char in string.
 *
 * @c: a character
 * @s: array of characters
 * Return: 1 char found 0 not found
 */
int _instring(char c, char *s)
{
	int i = 0;

	while (s[i] != '\0')
		if (c == s[i++])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: arry of characters
 * Return: string
 */

char *cap_string(char *s)
{
	int	i = 0;
	char *sep = " \t\n,;.!?\"(){}";

	while (s[i])
	{
		if (_instring(s[i], sep))
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= ('a' - 'A');
		i++;
	}
	return (s);
}

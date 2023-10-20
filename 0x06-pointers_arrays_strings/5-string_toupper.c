#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: arry of characters
 * Return: string
 */

char *string_toupper(char *s)
{
	int	i = 0;
	int p = ('a' - 'A');

	while (s[i])
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] -= p;
		i++;
	}
	return (s);
}

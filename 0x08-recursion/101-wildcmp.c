#include "main.h"

/**
 * wildcmp - compare string with wildcard recursively
 *
 * @s1: Array of char.
 * @s2: Array of char.
 * Return: 1 if string are same 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 != '*')
	{
		if (*s1 != *s2)
			return (0);
		else if (*s1 == *s2 && *s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s1 == '\0')
		return (wildcmp(s1, s2 + 1));
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}

#include "main.h"

/**
 * _strcmp - compare two string
 *
 * @s1: arry of characters
 * @s2: arry of characters
 * Return: integer 0 for equal, -1 less than 1 greated.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] && s2[j])
	{
		if (s1[i] != s2[j])
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

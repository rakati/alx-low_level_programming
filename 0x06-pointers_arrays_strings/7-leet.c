#include "main.h"

/**
 * leet - encode string with leet alg.
 *
 * @s: arry of characters
 * Return: string
 */

char *leet(char *s)
{
	int	i = 0;
	int j;
	char *l = "aeotl";
	char *u = "AEOTL";
	char *d = "43071";

	while (s[i])
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == l[j] || s[i] == u[j])
				s[i] = d[j];
			j++;
		}
		i++;
	}
	return (s);
}

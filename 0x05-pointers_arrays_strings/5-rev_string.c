#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: arry of characters
 */

void rev_string(char *s)
{
	int i;
	int n;
	char tmp;

	i = 0;
	while (s[i] != '\0')
		i++;
	n = i;
	i = 0;
	while (i < n / 2)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmp;
		i++;
	}
}

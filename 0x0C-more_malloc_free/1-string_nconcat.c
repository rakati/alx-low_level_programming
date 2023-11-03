#include "main.h"

/**
 * _strlen - len of string
 *
 * @s: arry of characters
 * Return: len of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: array of char
 * @s2: array of char
 * @n: unsigned integer
 * Return: pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = -1, ls1, ls2, k = 0;

	ls1 = s1 != NULL ? _strlen(s1) : 0;
	ls2 = s2 != NULL ? _strlen(s2) : 0;
	ls2 = n < ls2 ? n : ls2;
	s = malloc(ls1 + ls2 + 1);
	if (s == NULL)
		return (NULL);
	while (++i < ls1)
		s[i] = s1[i];
	while (k < ls2)
		s[i++] = s2[k++];
	s[i] = '\0';
	return (s);
}

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

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - concatenate two string
 * @s1: array to concatenate
 * @s2: array to concatenate
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int sz1, sz2, i;

	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	arr = malloc((sz1 + sz2 + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	arr[sz1 + sz2] = '\0';
	for (i = 0; i < sz1; i++)
		arr[i] = s1[i];
	for (; i < sz1 + sz2; i++)
		arr[i] = s2[i - sz1];
	return (arr);
}

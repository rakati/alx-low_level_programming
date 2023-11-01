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
 * strtow - splits a string into words.
 * @str: Array of characters
 *
 * Return: pointer to 2d array of splitted string.
 */
char **strtow(char *str)
{
	int len = 0;
	char **arr;
	int i = 0, j = 0, z;

	if (!str || !str[0])
		return (NULL);
	while (str[i])
	{
		if ((str[i + 1] == ' ' || str[i + 1] == '\0') && str[i] != ' ')
			len++;
		i++;
	}
	arr = malloc(sizeof(char *) * (len + 2));
	if (!arr)
		return (NULL);
	arr[len] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			len = 1;
			while (str[len + i] && str[len + i] != ' ')
				len++;
			arr[j] = malloc(sizeof(char) * (len + 1));
			for (z = 0; z < len; z++)
				arr[j][z] = str[i++];
			arr[j++][z] = '\0';
		}
		else
			i++;
	}
	return (arr);
}

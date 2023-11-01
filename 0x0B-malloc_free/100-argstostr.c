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
 * argstostr - concatenate array of strings
 * @ac: number of stringsy
 * @av: arrau of string
 *
 * Return: pointer to strings concatenated
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	char *arr;
	int i, j, z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;
	arr = malloc((len + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			arr[z++] = av[i][j];
		arr[z++] = '\n';
	}
	arr[z] = '\0';
	return (arr);
}

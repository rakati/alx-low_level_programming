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
	return (i - 1);
}

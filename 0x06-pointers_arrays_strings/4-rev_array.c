#include "main.h"

/**
 * _strncpy - appends the n char from src string to the dest string
 *
 * @dest: arry of characters
 * @src: arry of characters
 * @n: integer
 * Return: concatenated string
 */

char	*_strncpy(char *dest, char *src, int n)
{
	int	i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

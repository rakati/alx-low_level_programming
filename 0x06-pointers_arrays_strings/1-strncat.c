#include "main.h"

/**
 * _strncat - appends the n char from src string to the dest string
 *
 * @dest: arry of characters
 * @src: arry of characters
 * @n: integer
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] && j < n)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 *
 * @dest: arry of characters
 * @src: arry of characters
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	return (dest);
}

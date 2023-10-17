#include "main.h"

/**
 * _strcpy - copy string to ptr
 *
 * @dest: dest arry of characters
 * @src: src arry of characters
 *
 * Return: dest arry of characters
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

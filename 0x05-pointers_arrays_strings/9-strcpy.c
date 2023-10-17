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

	i = 0;
	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

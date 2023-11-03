#include "main.h"

/**
 * _calloc -  allocates memory for an array and initialized it to 0
 *
 * @nmemb: unsigned integer
 * @size: unsigned integer
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

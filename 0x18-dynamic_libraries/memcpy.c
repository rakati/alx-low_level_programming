#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	dest[n - 1] = src[n - 1];
	return (dest);
}

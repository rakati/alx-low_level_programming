#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	if (*s == *accept)
		return (accept);
	return (s);
}

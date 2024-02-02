#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	if (*needle == *haystack)
		return (haystack);
	return (needle);
}

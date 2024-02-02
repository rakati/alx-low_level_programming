#include "main.h"

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

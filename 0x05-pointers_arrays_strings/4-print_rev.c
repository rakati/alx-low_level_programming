#include "main.h"

/**
 * print_rev - print string to stdout reversed
 *
 * @str: arry of characters
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
		_putchar(s[i--]);
	_putchar('\n');
}

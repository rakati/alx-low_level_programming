#include "main.h"

/**
 * print_rev - print string to stdout reversed
 *
 * @str: arry of characters
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}

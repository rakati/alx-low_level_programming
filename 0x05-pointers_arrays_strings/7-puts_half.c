#include "main.h"

/**
 * puts_half - print last half of string
 *
 * @str: array characters
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i = (i - (i % 2 != 0)) / 2;
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar('\n');
}

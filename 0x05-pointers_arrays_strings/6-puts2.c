#include "main.h"

/**
 * maputs2in - print even order
 *
 * @str: array characters
 */
void puts2(char *str)
{
    int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
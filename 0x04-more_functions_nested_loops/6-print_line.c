#include "main.h"

/**
 * print_line -  draws a straight line in the terminal
 *
 * @n: integer
 */
void print_line(int n)
{
	if (n > 0)
		while (n--)
			_putchar('_');
	_putchar('\n');
}

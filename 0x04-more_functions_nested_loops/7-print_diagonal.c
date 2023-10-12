#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: integer
 */
void print_diagonal(int n)
{
	int i = 1, j;

	if (n > 0)
		while (i <= n)
		{
			j = 0;
			while (++j < i)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	else
		_putchar('\n');
}

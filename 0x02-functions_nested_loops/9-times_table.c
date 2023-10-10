#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int x, i;
	int res;

	x = 0;
	while (x < 10)
	{
		i = 1;
		_putchar('0');
		res = 0;
		while (i < 10)
		{
			res += x;
			_putchar(',');
			_putchar(' ');
			_putchar(res / 10 == 0 ? ' ' : res / 10 + '0');
			_putchar(res % 10 + '0');
			i++;
		}
		_putchar('\n');
		x++;
	}
}

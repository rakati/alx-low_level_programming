#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int x, i;
	int res;

	if (n < 0 || n > 15)
		return;
	x = 0;
	while (x <= n)
	{
		i = 1;
		_putchar('0');
		res = 0;
		while (i <= n)
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

#include "main.h"

/**
 * print_binary - print binary representation of an integer
 *
 * @n: a unsigned long integer
 */
void print_binary(unsigned long int n)
{
	int i, s = 0;

	for (i = 63; i >= 0; i--)
	{
		if (!s && ((n >> i) & 1))
			s = 1;
		if (s)
			_putchar(((n >> i) & 1) + '0');
	}
}

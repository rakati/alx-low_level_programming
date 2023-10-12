#include "main.h"

/**
 * print_triangle - draws a triangle using #.
 *
 * @size: integer - triangle size
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
			_putchar(' ');
		for (; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

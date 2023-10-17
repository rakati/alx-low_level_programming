#include "main.h"

/**
 * swap_int - swap two integers
 *
 * @a: integer
 * @b: integer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

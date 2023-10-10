#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 *
 * @n: an integer
 * Return: void
 */
void print_to_98(int n)
{
	int s;

	if (n < 98)
		s = 1;
	else
		s = -1;
	while (n != 98)
	{
		printf("%d, ", n);
		n += s;
	}
	printf("98\n");
}

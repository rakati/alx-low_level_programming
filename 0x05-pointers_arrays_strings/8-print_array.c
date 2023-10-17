#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elemennts
 *
 * @a: arry of integers
 * @n: an integer
 */

void print_array(int *a, int n)
{
	int i;

	if (n < 1)
		return;
	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		printf("%s", (i == n) ? "\n" : ", ");
	}

}

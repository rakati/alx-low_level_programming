#include <stdio.h>

/**
 * main - print to the standard output
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i = 1, j = 2, tmp;
	int c = 0;

	printf("1, 2");
	while (c < 98)
	{
		printf(", %lu", i + j);
		tmp = j;
		j += i;
		i = tmp;
		c++;
	}
	printf("\n");
	return (0);
}

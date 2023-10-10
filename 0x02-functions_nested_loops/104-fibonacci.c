#include <stdio.h>

/**
 * main - print to the standard output
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i = 1, j = 2, tmp;
	unsigned long int ii = 0, jj = 0, t = 0;
	int c = 0;

	printf("1, 2");
	while (c < 96)
	{
		tmp = j;
		t = jj;

		j += i;
		jj += ii + j / 100000;
		j = j % 100000;

		i = tmp;
		ii = t;
		if (jj != 0)
			printf(", %lu%05lu", jj, j % 100000);
		else
			printf(", %lu", j % 100000);
		c++;
	}
	printf("\n");
	return (0);
}

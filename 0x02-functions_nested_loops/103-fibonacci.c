#include <stdio.h>

/**
 * main - print to the standard output
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i = 1, j = 2, tmp;
	long int sum = 2;

	while (i + j <= 4000000)
	{
		if ((i + j) % 2 == 0)
			sum += i + j;
		tmp = j;
		j += i;
		i = tmp;
	}
	printf("%ld\n", sum);
	return (0);
}

#include <stdio.h>

/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 3, sum = 0;

	while (i < 1024)
	{
		sum += i;
		i += 3;
	}
	i = 5;
	while (i < 1024)
	{
		if (i % 3 != 0)
			sum += i;
		i += 5;
	}
	printf("%d\n", sum);
	return (0);
}

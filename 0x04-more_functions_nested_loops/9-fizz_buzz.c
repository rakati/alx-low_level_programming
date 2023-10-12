#include <stdio.h>

/**
 * main - Fizz-Buzz test print from 1 to 100 with FizzBuzz for multiples of 3,
 * and 5, Fizz for multiples of 3, buz for multiples of 5.
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		printf("%c", " \n"[i == 100]);
	}

	return (0);
}

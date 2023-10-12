#include <stdio.h>
#include <math.h>

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
	long int res, n = 612852475143;

	if (n % 2 == 0)
	{
		res = 2;
		while (n % 2 == 0)
			n /= 2;
	}
	for (i = 3; i < sqrt(n); i++)
	{
		if (n % i == 0)
		{
			res = i;
			while (n % i == 0)
				n /= i;
		}
	}
	printf("%ld\n", n > 2 ? n : res);
	return (0);
}

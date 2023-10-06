#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check last digit number
 *
 * Description: check last digit of a number
 *	- if it is greater than 5
 *	- if it is a zero
 *	- if it is less than 6 and different than 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	printf("Last digit of %d is %d and ", n, last_digit);
	if (last_digit == 0)
		printf("is 0");
	else if (last_digit > 5)
		printf("is greater than 5");
	else if (last_digit < 6)
		printf("is less than 6 and not 0");
	printf("\n");
	return (0);
}

#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0, b;

	while (a < 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			putchar('0' + a);
			putchar('0' + b++);
			if (a != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}

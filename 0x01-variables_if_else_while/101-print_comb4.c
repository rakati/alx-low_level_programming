#include <stdio.h>

/**
 * main - Prints all possible combinations of three digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0, b, c;

	while (a < 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if (a != 7)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

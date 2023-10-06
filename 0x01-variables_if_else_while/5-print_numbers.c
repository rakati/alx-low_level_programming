#include <stdio.h>

/**
 * main - Prints the digits from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
		putchar(c++);
	putchar('\n');
	return (0);
}

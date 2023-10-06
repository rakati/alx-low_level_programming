#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}

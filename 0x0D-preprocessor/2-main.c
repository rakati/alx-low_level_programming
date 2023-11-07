#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	char s[] = __FILE__;

	while (s[i])
		_putchar(s[i++]);
	_putchar('\n');
	return (0);
}

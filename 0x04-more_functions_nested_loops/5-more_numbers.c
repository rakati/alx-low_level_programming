#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 9
 *
 */
void more_numbers(void)
{
	int c;
	int i = 0;

	while (i++ < 10)
	{
		c = 0;
		while (c <= 14)
		{
			if (c > 9)
				_putchar('0' + c / 10);
			_putchar('0' + c % 10);
			c++;
		}
		_putchar('\n');
	}
}

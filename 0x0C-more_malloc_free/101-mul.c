#include "main.h"

/**
 * _puts - print string to stdout
 *
 * @str: arry of characters
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}

/**
 * _isdigits - checks if array if character contains only digits.
 *
 * @c: array of characters
 * Return: lenght of array if c contains digits otherwise 0.
 */
int _isdigits(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] < '0' && c[i] > '9')
			return (0);
		c[i] -= '0';
		i++;
	}
	return (i);
}

/**
 * rev_string - reverse string
 *
 * @s: arry of characters
 */

void rev_string(char *s)
{
	int i;
	int n;
	char tmp;

	i = 0;
	while (s[i] != '\0')
		i++;
	n = i;
	i = 0;
	while (i < n / 2)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmp;
		i++;
	}
}

/**
 * mult_str - multiply number in two strings
 *
 * @s1: string number
 * @s2: string number
 * @l1: size of string 1
 * @l2: size of string 2
 * Return: string result.
 */

char *mult_str(char *s1, char *s2, int l1, int l2)
{
	char *res;
	int i, j, tmp = 0;

	res = malloc(l1 + l2);
	if (!res)
		return (NULL);
	for (i = 0; i < l1 + l2; i++)
		res[i] = 0;
	for (i = 0; i < l1; i++)
		for (j = 0; j < l2; j++)
			res[i + j] = s1[i] * s2[j];
	for (i = 0; i < l1 + l2; i++)
	{
		res[i] += tmp;
		tmp = res[i] / 10;
		res[i] = res[i] % 10;
	}
	return (res);
}

/**
 * main - check the code for
 *
 * @ac: number of args
 * @av: array of args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int l1, l2;
	char *res;
	int i;

	if (ac != 3)
	{
		_puts("Error\n");
		exit(98);
	}
	l1 = _isdigits(av[1]);
	l2 = _isdigits(av[2]);
	if (l1 == 0 || l2 == 0)
	{
		_puts("Error\n");
		exit(98);
	}
	rev_string(av[1]);
	rev_string(av[2]);
	res = mult_str(av[1], av[2], l1, l2);
	if (!res)
	{
		_puts("Error\n");
		exit(98);
	}
	for (i = l1 + l2 - 1; res[i] == 0 && i > 0; i--)
		;
	for (; i >= 0; i--)
		_putchar(res[i] + '0');
	_putchar('\n');
	return (0);
}

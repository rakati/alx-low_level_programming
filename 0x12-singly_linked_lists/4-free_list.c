#include "lists.h"
#include <stdio.h>

/**
 * print_list - print list node values
 * @h: pointer to the head node of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int n;
	list_t *curr;

	if (h == NULL)
		return (0);
	n = 0;
	curr = (list_t *)h;
	while (curr)
	{
		if (curr->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", curr->len, curr->str);
		curr = curr->next;
		n++;
	}
	return (n);
}

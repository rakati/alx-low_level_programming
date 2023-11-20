#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: A pointer to the head of the list
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	listint_t *curr;
	int res;

	curr = (listint_t *)h;
	res = 0;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		res++;
		curr = curr->next;
	}
	return (res);
}

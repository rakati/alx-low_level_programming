#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Calculate number of elements int listint_t list
 * @h: A pointer to the head of the list
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	listint_t *curr;
	size_t res;

	curr = (listint_t *)h;
	res = 0;
	while (curr != NULL)
	{
		res++;
		curr = curr->next;
	}
	return (res);
}

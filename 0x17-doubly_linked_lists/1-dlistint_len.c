#include "lists.h"

/**
 * dlistint_len - count number of nodes of doubly linked list
 *
 * @h: head of the doubly linked list
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *cur;
	size_t count;

	cur = (dlistint_t *)h;
	count = 0;
	while (cur != NULL)
	{
		cur = cur->next;
		count++;
	}
	return (count);
}

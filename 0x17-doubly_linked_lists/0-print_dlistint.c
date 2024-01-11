#include "lists.h"

/**
 * print_dlistint - prints all the elements of the doubly linked list
 *
 * @h: head of the doubly linked list
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *cur;
	size_t count;

	cur = (dlistint_t *)h;
	count = 0;
	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
		count++;
	}
	return (count);
}

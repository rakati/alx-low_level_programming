#include "lists.h"

/**
 * get_dnodeint_at_index - get node at specific index of dlistint_t linked list
 *
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node to return
 *
 * Return: node at passed index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *c;
	unsigned int pos = 0;

	c = head;
	while (c != NULL)
	{
		if (pos == index)
			return (c);
		c = c->next;
		pos++;
	}
	return (NULL);
}

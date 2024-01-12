#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at specific position of dlistint_t
 * linked list
 *
 * @h: pointer to the head of the doubly linked list
 * @idx: index of place to insert the new node
 * @n: value of the new node
 *
 * Return: node at passed index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *c, *new;
	unsigned int pos = 0;

	c = *h;
	while (c != NULL)
	{
		if (pos == idx)
			break;
		c = c->next;
		pos++;
	}
	if (pos != idx || (c == NULL && idx != 0))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = c;
	new->prev = c != NULL ? c->prev : NULL;
	new->n = n;
	if (idx == 0)
		*h = new;
	else
	{
		c->prev->next = new;
		c->prev = new;
	}
	return (new);
}

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
	if (idx != 0)
		while (c != NULL)
		{
			if (pos == idx - 1)
				break;
			c = c->next;
			pos++;
		}
	if (pos != 0 && (c == NULL || pos != idx - 1))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = c;
		if (c != NULL)
			c->prev = new;
		new->prev = NULL;
		*h = new;
	}
	else
	{
		new->next = c->next;
		new->prev = c;
		if (c->next != NULL)
			c->next->prev = new;
		c->next = new;

	}
	new->n = n;
	return (new);
}

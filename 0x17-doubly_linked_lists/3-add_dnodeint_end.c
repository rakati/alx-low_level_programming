#include "lists.h"

/**
 * add_dnodeint_end - Add node at the end of a doubly linked list
 *
 * @head: pointer to the head of the doubly linked list
 * @n: node data
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *c;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	c = *head;
	if (c)
	{
		while (c->next != NULL)
			c = c->next;
		c->next = new;
	}
	else
		*head = new;
	new->next = NULL;
	new->prev = c;
	new->n = n;
	return (new);
}

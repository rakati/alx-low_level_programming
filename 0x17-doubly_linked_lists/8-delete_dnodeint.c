#include "lists.h"

/**
 * delete_dnodeint_at_index - remove node at specific position of dlistint_t
 * linked list
 *
 * @head: pointer to the head of the doubly linked list
 * @index: index of place to insert the new node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c;
	unsigned int pos = 0;

	c = *head;
	while (c != NULL)
	{
		if (pos == index)
			break;
		c = c->next;
		pos++;
	}
	if (c == NULL || pos != index)
		return (-1);
	if (index == 0)
		*head = c->next;
	if (c->prev != NULL)
		c->prev->next = c->next;
	if (c->next != NULL)
		c->next->prev = index == 0 ? NULL : c->prev;
	free(c);
	return (1);
}

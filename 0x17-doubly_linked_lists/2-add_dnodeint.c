#include "lists.h"

/**
 * add_dnodeint - Add node at the beginning of a doubly linked list
 *
 * @head: pointer to the head of the doubly linked list
 * @n: node datg
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	if (*head)
		new->next->prev = new;
	*head = new;
	return (new);
}

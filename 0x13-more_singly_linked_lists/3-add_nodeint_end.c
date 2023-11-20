#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: A pointer to the head of the list
 * @n: an integer to be add as new node value
 * Return: the number of nodes.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *curr;

	new = malloc(sizeof(listint_t *));
	if (!new)
		return (NULL);
	new->n = n;
	curr = *head;
	if (!curr)
	{
		*head = new;
		return (new);
	}
	while (curr->next)
		curr = curr->next;
	curr->next = new;
	return (new);
}

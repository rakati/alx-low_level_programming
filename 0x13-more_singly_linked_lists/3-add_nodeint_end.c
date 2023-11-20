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

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = new;
	return (new);
}

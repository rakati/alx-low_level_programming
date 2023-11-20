#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list
 * @head: A pointer to the head of the list
 * @n: an integer to be add as new node value
 * Return: the number of nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t *));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

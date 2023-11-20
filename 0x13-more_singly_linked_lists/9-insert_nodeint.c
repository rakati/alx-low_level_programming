#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in the list
 * @head: A pointer to the head of the list
 * @idx: an integer represent the position to insert node
 * @n: the integer value for the new node
 * Return: address of inserted node or null on error.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *new;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	if (*head == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = (*head ? (*head)->next : NULL);
		*head = new;
		return (new);
	}
	curr = *head;
	while (i < idx - 1 && curr)
	{
		curr = curr->next;
		i++;
	}
	if (i != idx - 1)
	{
		free(new);
		return (NULL);
	}
	new->next = curr->next;
	curr->next = new;
	return (new);
}

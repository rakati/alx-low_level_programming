#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint -  reverse listint_t list
 * @head: A pointer to pointer on the head of the list
 *
 * Return: the number of nodes.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head)
		return (NULL);
	prev = NULL;
	next = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}

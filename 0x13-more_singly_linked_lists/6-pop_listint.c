#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - pop the first node from the list
 * @head: A pointer to the head of the list
 * Return: value of the first node.
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int n;

	if (!head || *head == NULL)
		return (0);
	curr = *head;
	*head = curr->next;
	n = curr->n;
	free(curr);
	return (n);
}

#include "lists.h"

/**
 * free_dlistint - free memory of a doubly linked list
 *
 * @head: pointer to the head of the doubly linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

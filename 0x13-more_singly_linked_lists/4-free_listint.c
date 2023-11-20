#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free allocated memory for a listint_t list
 * @head: A pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *curr, *next;

	curr = head;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}

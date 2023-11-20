#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free allocated memory for a listint_t list and set head
 * pointer to null
 * @head: A pointer on pointer of the list head.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *next;

	curr = *head;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*head = NULL;
	head = NULL;
}

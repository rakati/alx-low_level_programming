#include "lists.h"

/**
 * free_list - free list
 * @head: pointer to the head node of the list
 *
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->str)
		free(head->str);
	free_list(head->next);
	free(head);
}

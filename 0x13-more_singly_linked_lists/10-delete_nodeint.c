#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at a given position in the list
 * @head: A pointer to the head of the list
 * @index: an integer represent the position to insert node
 * Return: index of deleted node or -1 on error.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *del;
	unsigned int i = 0;

	if (!head)
		return (-1);
	curr = *head;
	if (index == 0)
	{
		del = *head;
		*head = *head ? del->next : NULL;
		free(del);
		return (index);
	}
	while (i < index - 1 && curr)
	{
		curr = curr->next;
		i++;
	}
	if (i != index - 1 || curr == NULL)
		return (-1);
	del = curr->next;
	curr->next = del ? del->next : NULL;
	free(del);
	return (index);
}

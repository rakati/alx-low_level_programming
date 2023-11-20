#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a listint_t linked list.
 * @head: A pointer to the head of the list
 * @index: an integer represent the index of the node to return
 * Return: return nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	curr = head;
	while (i != index && curr)
	{
		curr = curr->next;
		i++;
	}
	return (curr);
}

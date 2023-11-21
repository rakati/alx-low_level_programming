#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - first node of the circle in a linked list.
 * @head: A pointer to the head of the list
 *
 * Return: start node of a circle
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
		return (NULL);
	slow = (listint_t *)head;
	fast = slow;
	while (slow)
	{
		slow = slow->next;
		if (fast)
			fast = fast->next ? fast->next->next : NULL;
		if (slow == fast)
			break;
	}
	if (slow == NULL || slow != fast)
		return (NULL);
	slow = (listint_t *)head;
	while (slow != fast)
	{
		fast = fast->next;
		slow = slow->next;
	}
	return (slow);
}

#include <stdio.h>
#include "lists.h"

/**
 * _print_listint_safe -  prints all the elements of a listint_t list, handle
 * circular list, detect circle and find first node of the circle.
 * @head: A pointer to the head of the list
 *
 * Return: the number of nodes.
 */
size_t _print_listint_safe(listint_t *head)
{
	listint_t *slow, *fast;
	int res;

	if (!head)
		return (0);
	slow = head;
	fast = slow;
	res = 0;
	while (slow)
	{
		res++;
		slow = slow->next;
		if (fast)
			fast = fast->next ? fast->next->next : NULL;
		if (slow == fast)
			break;
	}
	if (slow == NULL || slow != fast)
		return (res);
	slow = (listint_t *)head;
	while (slow != fast)
	{
		fast = fast->next;
		slow = slow->next;
		res++;
	}
	return (res);
}

/**
 * free_listint_safe -  free all the elements of a listint_t list, handle
 * circular list, detect circle and find first node of the circle.
 * @h: A pointer to the head of the list
 *
 * Return: the number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *tmp;
	int res;
	int i = 0;

	if (!h || *h == NULL)
		return (0);
	res = _print_listint_safe(*h);
	curr = *h;
	while (i < res)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
		i++;
	}
	*h = NULL;
	h = NULL;
	return (res);
}

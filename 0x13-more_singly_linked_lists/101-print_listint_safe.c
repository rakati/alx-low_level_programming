#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe -  prints all the elements of a listint_t list, handle
 * circular list, detect circle and find first node of the circle.
 * @head: A pointer to the head of the list
 *
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *slow, *fast;
	int res;

	if (!head)
		return (98);
	slow = (listint_t *)head;
	fast = slow;
	res = 0;
	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
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
		printf("[%p] %d\n", (void *)fast, fast->n);
		fast = fast->next;
		slow = slow->next;
		res++;
	}
	printf("-> [%p] %d\n", (void *)slow, slow->n);

	return (res);
}

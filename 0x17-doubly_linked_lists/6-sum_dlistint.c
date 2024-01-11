#include "lists.h"

/**
 * sum_dlistint - return sum of the elements in a doubly linked list
 *
 * @head: head of the doubly linked list
 *
 * Return: the sum of data of nodes in linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur;
	size_t sum;

	cur = head;
	sum = 0;
	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}

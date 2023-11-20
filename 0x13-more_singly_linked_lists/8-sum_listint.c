#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculate sum of all the data (n) of a listint_t linked list.
 * @head: A pointer to the head of the list
 * Return: return sum  all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *curr;
	int sum = 0;

	if (!head)
		return (0);
	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}

#include "lists.h"

/**
 * list_len -  calculate number of elements in a linked `list_t` list
 * @h: pointer to the head node of the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int n = 0;
	list_t *curr = (list_t *)h;

	if (h == NULL)
		return (0);
	while (curr)
	{
		curr = curr->next;
		n++;
	}
	return (n);
}

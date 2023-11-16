#include "lists.h"

/**
 * _strlen - len of string
 *
 * @s: array of characters
 * Return: len of string
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node - Add new node to the beginning of a list
 * @head: pointer to the head node of the list
 * @str: array of char to be add as a value of the new node
 *
 * Return: ptr to the new head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t *));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = (list_t *)(*head);
	new->len = _strlen(str);
	*head = new;
	return (new);
}

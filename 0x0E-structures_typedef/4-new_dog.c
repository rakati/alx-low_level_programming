#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - return a copy of an array of char
 * @str: array to copy
 *
 * Return: pointer to a copy of an array of char
 */
char *_strdup(char *str)
{
	char *arr;
	int size = 0, i;

	if (!str)
		return (NULL);
	while (str[size])
		size++;
	arr = malloc((size + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	arr[size] = '\0';
	for (i = 0; i < size; i++)
		arr[i] = str[i];
	return (arr);
}

/**
 * new_dog - define a new dog info
 *
 * @name: string
 * @age: float dog age
 * @owner: string owner name
 *
 * Return: allocated dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = _strdup(name);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = _strdup(owner);
	if (!d->owner)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	return (d);
}

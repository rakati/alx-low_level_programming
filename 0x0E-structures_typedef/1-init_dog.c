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
 * init_dog - Initialize dog info
 *
 * @d: dog struct
 * @name: string
 * @age: float dog age
 * @owner: string owner name
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = _strdup(name);
	d->age = age;
	d->owner = _strdup(owner);
}

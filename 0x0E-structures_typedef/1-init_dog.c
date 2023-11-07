#include "dog.h"

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
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		exit(1);
	}
}

#include "dog.h"

/**
 * free_dog - free dog struct
 *
 * @d: dog struct
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}

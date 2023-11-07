#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog info
 *
 * @d: dog struct
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", (d->name ? d->name : "(nil)"),
			   d->age,
			   (d->owner ? d->owner : "(nil)"));
	}
}

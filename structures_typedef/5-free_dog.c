#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - free!!!!!!!!!!
 * @d: pointer stand-in for dog_t
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

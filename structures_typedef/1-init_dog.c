#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct
 * @d: pointer to the struct
 * @name: love dogs
 * @age: looove dogs
 * @owner: love 'em
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

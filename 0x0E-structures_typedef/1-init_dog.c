#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a dog object (struct dog)
 *
 * @d: struct dog - dog object
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: dog's owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dog;

	dog = malloc(sizeof(*d));

	if (!dog)
		return;

	dog = d;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

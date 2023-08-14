#include "dog.h"

/**
 * init_dog - Initializes a dog
 *
 * @d: pointer to structure dog
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: dog's owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: the length of the string excluding the null byte
 *
 */
unsigned int _strlen(char *s)
{
	unsigned int i, l = 0;

	if (s == NULL)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
		l++;

	return (l);
}

/**
 * new_dog - Creates a new dog
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: dog's owner name
 *
 * Return: a pointer to a new structure dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

	if (name)
	{
		dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

		if (!dog->name)
			return (NULL);

		for (i = 0; name[i] != '\0'; i++)
			dog->name[i] = name[i];

		dog->name[i] = '\0';
	}
	else
		dog->name = NULL;

	if (owner)
	{
		dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

		if (!dog->owner)
			return (NULL);

		for (i = 0; owner[i] != '\0'; i++)
			dog->owner[i] = owner[i];

		dog->owner[i] = '\0';
	}
	else
		dog->owner = NULL;

	dog->age = age;
	return (dog);
}

#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name : name dog
 * @age : age dog
 * @owner : owner dog
 * Return: Allways return d
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t	*d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

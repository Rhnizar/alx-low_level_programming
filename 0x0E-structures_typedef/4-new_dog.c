#include "dog.h"

/**
 * new_dog - new dog
 * @name : name dog
 * @age : age dog
 * @owner : owner dog
 * Return : Allways return d
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t	*d;
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

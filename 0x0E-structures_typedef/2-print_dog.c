#include "dog.h"

/**
 * print_dog - print dog
 * @d : struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: nil\n");
		if (d->age)
                        printf("Age: %s\n", d->age);
                else
                        printf("Age : nil\n");
		if (d->Owner)
                        printf("Owner: %s\n", d->owner);
                else
                        printf("nil\n");

	}
}

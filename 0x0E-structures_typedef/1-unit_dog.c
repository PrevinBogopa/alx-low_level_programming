#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type structure dog
 * @d: The variable of type struct dog
 * @name: member
 * @age: member
 * @owner: member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL) /* check through(validaton) */
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

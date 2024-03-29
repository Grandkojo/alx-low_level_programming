# include <stdio.h>
# include <stdlib.h>
# include "dog.h"

/**
 * init_dog - initializes a variable of type struct_dog
 * @d: dog's name
 * @name: name
 * @age: do's age
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

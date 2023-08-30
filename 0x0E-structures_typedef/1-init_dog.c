##include <stdlib.h>
#include "dog.h"

/**
 * init_dog - specifier initializes a variable of type struct dog
 * @d: specifier pointer to struct dog to initialize
 * @name: specifier name to initialize
 * @age: specifier age to initialize
 * @owner: specifier owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

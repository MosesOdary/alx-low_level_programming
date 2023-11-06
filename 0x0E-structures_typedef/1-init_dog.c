#include "dog.h"

/**
 * init_dog - initilizes a struct with its parameter values
 *
 * @d: the struct to initialize
 * @name: the value to intialize name inside the struct
 * @age: the value to intialize age inside the struct
 * @owner: the value to intialize owner inside the struct
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



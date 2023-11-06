#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: the struct to print
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
		if (!(d->age))
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
		if (!(d->owner))
			printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
		return;
}



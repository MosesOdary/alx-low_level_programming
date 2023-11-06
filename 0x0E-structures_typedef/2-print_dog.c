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
			printf("Name: (nil)\nAge: %.1f\nOwner: %s\n", d->age, d->owner);

		printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
		return;
}



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
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		!((*d).name) ? d->name : "(nil)", (*d).age,
		!((*d).owner) ? d->owner : "(nil)");
	}
}



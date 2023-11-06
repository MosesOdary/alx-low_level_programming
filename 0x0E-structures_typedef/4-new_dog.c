#include <stdio.h>

#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: the new dog's name
 * @age: the dog's age
 * @owner: the dog's owner
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	char *nameCopy = name;
	char *ownerCopy = owner;

	dog_t newDog = {.name = name, .age = age, .owner = owner};
	dog_t *dogPtr = &newDog;

	if (!(newDog.name) || !(newDog.age) || !(newDog.owner))
		return (NULL);

	return (&newDog);
}


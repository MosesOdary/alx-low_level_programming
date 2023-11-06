#include <stdio.h>

#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: the new dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: a pointer to the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDogPtr;
	__uint16_t i = 0;
	__uint16_t nameLength = 0;
	__uint16_t ownerLength = 0;

	newDogPtr = malloc(sizeof(*newDogPtr));
	if (!(newDogPtr) || !(name) || !(owner))
	{
		free(newDogPtr);
		return (NULL);
	}

	while (*name)
		nameLength++;

	while(*owner)
		ownerLength++;

	newDogPtr->name = malloc(nameLength + 1);
	newDogPtr->owner = malloc(ownerLength + 1);

	if (!(newDogPtr->name) || !(newDogPtr->owner))
	{
		free(newDogPtr->owner);
		free(newDogPtr->name);
		free(newDogPtr);
		return (NULL);
	}

	while (*name)
		newDogPtr->name[i] = name[i];
	newDogPtr->name[i] = '\0';

	newDogPtr->age = age;

	while (*owner)
		newDogPtr->owner[i] = owner[i];
	newDogPtr->owner[i] = '\0';

	return (newDogPtr);
}


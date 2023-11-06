#include <stdlib.h>

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
	__uint16_t i = 0;
	__uint16_t nameLength = 0;
	__uint16_t ownerLength = 0;
	dog_t *newDogPtr;

	newDogPtr = malloc(sizeof(*newDogPtr));

	if (!(newDogPtr) || !(name) || !(owner))
	{
		free(newDogPtr);
		return (NULL);
	}

	for (nameLength = 0; name[nameLength]; nameLength++)
		;
	for (ownerLength = 0; owner[ownerLength]; ownerLength++)
		;
	newDogPtr->name = malloc(nameLength + 1);
	newDogPtr->owner = malloc(ownerLength + 1);

	if (!(newDogPtr->name) || !(newDogPtr->owner))
	{
		free(newDogPtr->owner);
		free(newDogPtr->name);
		free(newDogPtr);
		return (NULL);
	}

	for (i = 0; i < nameLength; i++)
		newDogPtr->name[i] = name[i];
	newDogPtr->name[i] = '\0';

	newDogPtr->age = age;

	for (i = 0; i < ownerLength; i++)
		newDogPtr->owner[i] = owner[i];
	newDogPtr->owner[i] = '\0';

	return (newDogPtr);
}


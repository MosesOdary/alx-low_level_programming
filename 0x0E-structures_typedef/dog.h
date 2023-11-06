#pragma once

/*
* dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

/**
* struct dog - Defines a dog with name, age and owner
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};


#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 *
 * Return: a new pointer of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return (newDog);
}

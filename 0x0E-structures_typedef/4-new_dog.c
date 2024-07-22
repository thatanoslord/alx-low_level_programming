#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL || !doggo)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!doggo->name)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!doggo->owner)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	strcpy(doggo->name, name);
	doggo->age = age;
	strcpy(doggo->owner, owner);

	return (doggo);
}

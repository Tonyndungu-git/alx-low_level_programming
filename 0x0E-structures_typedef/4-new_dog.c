#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: pointer to a struct.
 */



dog_t *new_dog(char *name, float age, char *owner)
{

	struct dog *new_dog;

	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = (char *)malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	else
		strcpy(new_dog->name, name);
	new_dog->age = age;

	new_dog->owner = (char *)malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	else
		strcpy(new_dog->owner, owner);

	return (new_dog);
}

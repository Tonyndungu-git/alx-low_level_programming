#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: type struct dog.
 * @name: name of the dog
 * @age: age of the dog.
 * @owner: name 0f the owner.
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->breed, breed);


}

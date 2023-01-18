#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs.
 * @d: pointer to struct d
 * Return: Void.
 */

void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

#include "dog.h"
#include <stdlib.h>
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name)+1);
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner)+1);
	strcpy(d->owner, owner);

	free(d->name);
	free(d->owner);


}

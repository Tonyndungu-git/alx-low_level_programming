#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void print_dog(struct dog *d)
{


	printf("%s \n", d->name);

	printf("%f \n", d->age);

	printf("%s \n", d->owner);



}

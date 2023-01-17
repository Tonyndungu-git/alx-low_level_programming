#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog.
 * @d: pointer to struct.
 * Return: Void.
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
		printf("NULL");
	if (d->name == NULL)
		printf("nil");
	printf("%s \n", d->name);

	printf("%f \n", d->age);

	if (d->owner == NULL)
		printf("nil");
	printf("%s \n", d->owner);



}

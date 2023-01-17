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
	printf("Name: %s \n", d->name);

	printf("Age: %f \n", d->age);

	if (d->owner == NULL)
		printf("nil");
	printf("Owner: %s \n", d->owner);



}

#ifndef DOG_HEADER_H
#define DOG_HEADER_H



/**
 * struct dog - stores the details of a dog.
 * @name: First member
 * @owner: Second member
 * @age: Third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name - a function that prints a name.
 * @name: pointer to a char.
 * @f: pointer to a funcion.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

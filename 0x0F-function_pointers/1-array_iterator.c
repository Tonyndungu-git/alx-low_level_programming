#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function.
 * @array: an int array.
 * @size: size of the array.
 * @action: fuction pointer.
 * Return: returns void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}



}

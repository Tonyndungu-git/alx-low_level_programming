#include "function_pointers.h"

/**
 * int_index -function that searches for an integer.
 * @array: pointer to an array.
 * @size: size of the array.
 * @cmp: pointer to a function
 * Return: returns an int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{

		if ((*cmp)(array[i]) != 0)
		{
			(*cmp)(array[i]);
			return (i);
		}

		i++;
	}
	return (-1);

}

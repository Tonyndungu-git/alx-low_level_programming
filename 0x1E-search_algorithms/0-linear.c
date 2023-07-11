#include "search_algos.h"
/**
 * linear_search - searches using a linear algorithm
 * @array: the array being searched
 * @size: size of the array
 * @value: value being searched
 * Return: an int
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size ; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

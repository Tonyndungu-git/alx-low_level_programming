#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * exponential_search - interpolation search algorithm
 * @array: array being searched.
 * @size: size of the array.
 * @value: value being searched.
 * Return: an int
 */
int exponential_search(int *array, size_t size, int value)
{
	int low, high, range, i, j;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	range = 1;
	while (range < (int)size && array[range] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", range, array[range]);
		range *= 2;
	}
	low = range / 2;
	high = (range < (int)size) ? range : (int)size - 1;

	printf("Value found between indexes [%d] and [%d]\n", low, high);
	for (i = low; i <= high; i++)
	{
		printf("Searching in array: ");
		for (j = low; j <= high; j++)
		{
			printf("%d", array[j]);
			if (j != high)
			{
				printf(", ");
			}
		}
		printf("\n");

		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

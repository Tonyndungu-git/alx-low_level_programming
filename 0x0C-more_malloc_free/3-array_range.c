#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: the minimum int.
 * @max: the maximum int.
 * Return: pointer to the array.
 */

int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	size = (max - min);
	arr = malloc((size + 1) * sizeof(int));
	if (min > max)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	i = 0;

	while (i <= size)
	{
		arr[i] = min;
		i++;
		min++;

	}
	return (arr);

	if (arr == NULL)
		return (NULL);
}

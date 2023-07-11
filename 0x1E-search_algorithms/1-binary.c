#include "search_algos.h"

/**
 * binary_search - binary search algorithm.
 * @array: array being searched.
 * @size: size of the array
 * @value: value being searched.
 * Return: an int.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[right]);
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (mid);
		}

	}
	return (-1);
}

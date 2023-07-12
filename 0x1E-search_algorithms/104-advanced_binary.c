#include "search_algos.h"

int advanced_binary_recursive(int *array, int low, int high, int value);

/**
 * advanced_binary - interpolation search algorithm
 * @array: array being searched.
 * @size: size of the array.
 * @value: value being searched.
 * Return: an int
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
/**
 * advanced_binary_recursive - interpolation search algorithm
 * @array: array being searched.
 * @low: low index.
 * @high: high index.
 * @value: value being searched.
 * Return: an int
 */

int advanced_binary_recursive(int *array, int low, int high, int value)
{
	int i, mid;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			if (mid == low || array[mid - 1] != value)
				return (mid);
			else
				return (advanced_binary_recursive(array, low, mid, value));
		}
		else if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, high, value));
		else
			return (advanced_binary_recursive(array, low, mid - 1, value));
	}
	return (-1);
}

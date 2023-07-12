#include "search_algos.h"
#include <math.h>

/**
 * jump_search - interpolation search algorithm
 * @array: array being searched.
 * @size: size of the array.
 * @value: value being searched.
 * Return: an int
 */


int jump_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
     	return (-1);
}

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
	int i;
	int left = 0;
	int right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{

		int mid = left + (right - left) / 2;

		printf("searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", i);
			if (i != right)
			{
				printf(", ");
			}

		}
		printf("\n");

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

int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}

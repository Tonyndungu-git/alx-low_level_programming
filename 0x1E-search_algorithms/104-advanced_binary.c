#include "search_algos.h"


int advanced_binary(int *array, size_t size, int value) {
	int mid = size / 2;
	int element = array[mid];
	int i;

	if (array == NULL || size == 0) {
		return -1;
	}

	printf("Searching in array: ");
	i = 0;
	while(i < (int)size) {
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");

	if (element == value) {
		if (mid == 0 || array[mid - 1] != value) {
			return mid;
		} else {
			return advanced_binary(array, mid - 1, value);
		}
	} else if (element < value) {
		return advanced_binary(array + mid + 1, size - mid - 1, value);
	} else {
		return advanced_binary(array, mid - 1, value);
	}
}

int main(void)
{
    int array[] = {
        0, 1, 2, 5, 5, 6, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
    printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
    printf("Found %d at index: %d\n", 999, advanced_binary(array, size, 999));
    return (EXIT_SUCCESS);
}

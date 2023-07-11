#include "search_algos.h"
#include <math.h>

int jump_search(int *array, size_t size, int value) {
	int jump = sqrt(size);
	int prev = 0;
	int curr = fmin(prev + jump, size - 1);
	int i;

	if (array == NULL)
        return -1;


	while (array[prev] < value) {
		printf("Comparing %d\n", array[curr]);
		if (array[curr] >= value) {
			break;
		}
		prev = curr;
	}
	i = prev;
	while(i < fmin(prev + jump, size)){
		printf("Comparing %d\n", array[i]);
		if (array[i] == value) {
			return i;
		}
		i++;
	}
	return -1;
}

int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
    printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
    printf("Found %d at index: %d\n", 999, jump_search(array, size, 999));
    return (EXIT_SUCCESS);
}

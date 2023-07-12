#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

int exponential_search(int *array, size_t size, int value) {
  if (array == NULL || size == 0) {
    return -1;
  }

  if (array[0] == value) {
    printf("Value checked array[0] = [%d]\n", array[0]);
    return 0;
  }

  int range = 1;
  while (range < (int)size && array[range] <= value) {
    printf("Value checked array[%d] = [%d]\n", range, array[range]);
    range *= 2;
  }

  int low = range / 2;
  int high = (range < (int)size) ? range : (int)size - 1;

  printf("Value found between indexes [%d] and [%d]\n", low, high);

  int i;
  for (i = low; i <= high; i++) {
    printf("Searching in array: ");
    int j;
    for (j = low; j <= high; j++) {
      printf("%d", array[j]);
      if (j != high) {
        printf(", ");
      }
    }
    printf("\n");

    printf("Value checked array[%d] = [%d]\n", i, array[i]);
    if (array[i] == value) {
      return i;
    }
  }

  return -1;
}

int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 62, exponential_search(array, size, 62));
    printf("Found %d at index: %d\n\n", 3, exponential_search(array, size, 3));
    printf("Found %d at index: %d\n", 999, exponential_search(array, size, 999));
    return (EXIT_SUCCESS);
}

#include "search_algos.h"
listint_t *jump_list(listint_t *list, size_t size, int value) {

	int jump = sqrt(size);
	listint_t *current = list;


	if (list == NULL || size == 0) {
		return NULL;
	}


	while (current != NULL && current->n < value) {
		current = current->next;

		if (current - list >= jump) {
			current = list + jump;
		}
	}

	if (current == NULL) {
		return NULL;
	}

	if (current->n == value) {
		return current;
	}

	return NULL;
}

int main(void)
{
    listint_t *list, *res;
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    list = create_list(array, size);
    print_list(list);

    res =  jump_list(list, size, 53);
    printf("Found %d at index: %lu\n\n", 53, res->index);
    res =  jump_list(list, size, 2);
    printf("Found %d at index: %lu\n\n", 2, res->index);
    res =  jump_list(list, size, 999);
    printf("Found %d at index: %p\n", 999, (void *) res);

    free_list(list);
    return (EXIT_SUCCESS);
}

#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express = NULL, *prev = NULL;

	if (list == NULL)
		return (NULL);

	express = list->express;
	prev = list;

	while (express != NULL && express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       express->index, express->n);
		prev = express;
		express = express->express;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, express->index);

	while (prev != NULL && prev->index <= express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}

#include "search_algos.h"
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size);
	listint_t *prev = NULL, *curr = list;

	if (list == NULL)
		return (NULL);

	while (curr != NULL && curr->n < value)
	{
		prev = curr;
		while (curr->next != NULL && curr->index < jump)
			curr = curr->next;
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		jump += sqrt(size);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, curr->index);
	jump -= sqrt(size);

	while (prev != NULL && prev->index <= curr->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}

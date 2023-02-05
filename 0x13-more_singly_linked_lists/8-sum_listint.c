#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Returns the sum of all the data (n) of a linked list
 * @head: pointer to head of linked list
 * Return: sum of all data in list, or 0 if list is empty
 */



int sum_listint(listint_t *head)
{
	listint_t *tmp = head;

	int sum = 0;

	if (tmp == NULL)
		return (0);

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

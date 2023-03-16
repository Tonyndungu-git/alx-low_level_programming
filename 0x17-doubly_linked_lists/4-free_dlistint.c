#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dlistint - frees space from the list.
 * @head: pointer to the head of the list
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}

#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes a node of a singly linked list.
 * @head: pointer to the pointer of head.
 * @index: points to the index of a node.
 * Return: int.
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *previous;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (i < index)
	{
		previous = current;

		current = current->next;

		if (current == NULL)
		{
			return (-1);
		}
	}
	previous->next = current->next;
	free(current);
	return (1);
}

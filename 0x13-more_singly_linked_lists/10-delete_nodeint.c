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
	listint_t *temp;
	listint_t *rmovenode;
	unsigned int i;

	i = 0;
	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index - 1)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		rmovenode = temp;
		rmovenode = rmovenode->next;
		temp->next = rmovenode->next;
		free(rmovenode);
	}
	return (1);
}

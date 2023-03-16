#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets details about a linked list node at an index.
 * @head: a pointer to the head.
 * @index: the index to be located.
 * Return: a list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i = 0;
	dlistint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;


	}

	return (i == index ? tmp: NULL);

}

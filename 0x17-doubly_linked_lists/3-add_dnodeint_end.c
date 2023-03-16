#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"




dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return NULL;

	new_node->n = n;

	new_node->next = NULL;

	if (*head ==NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return(new_node);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	new_node->prev = temp;
	temp->next = new_node;

	return(new_node);
}

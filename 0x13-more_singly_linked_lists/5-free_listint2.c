#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - frees space from the list.
 * @head: pointer to a pointer to the head of the list
 * Return: void.
 */



void free_listint2(listint_t **head)
{

	listint_t *tmp, *next;

	if (head == NULL)
		return;

	tmp = *head;

	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*head = NULL;
}

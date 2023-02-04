#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees space from the list.
 * @head: pointer to the head of the list
 * Return: void.
 */


void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{

		tmp = head;
		head = head->next;
		free(tmp);

	}
}

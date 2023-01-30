#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - frees space from the list.
 * @head: pointer to the head of the list
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}

}

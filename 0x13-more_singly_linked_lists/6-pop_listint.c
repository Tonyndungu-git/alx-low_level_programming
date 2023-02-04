#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of linked list.
 * @head: pointer to a pointer of the list.
 * Return: int.
 */

int pop_listint(listint_t **head)
{

	int s;
	listint_t *current = *head;

	if (*head == NULL)
		return (0);
	*head = current->next;
	s = current->n;
	free(current);

	return (s);
}

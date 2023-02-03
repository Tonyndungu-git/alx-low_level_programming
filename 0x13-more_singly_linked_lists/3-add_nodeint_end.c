#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - fuction that adds a node at the end  of a linked list.
 * @head: pointer to a pointer of the head of the list.
 * @n: integer.
 * Return: the address of the new element, or NULL if it failed.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *s;
	listint_t *current;

	s = malloc(sizeof(listint_t));

	if (s == NULL)
		return (NULL);
	s->n = n;
	s->next = NULL;

	if (*head == NULL)
	{
		*head = s;
		return (s);
	}
	current = *head;

	while (current->next != NULL)
		current = current->next;
	current->next = s;
	return (s);
}

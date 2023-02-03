#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a node to a linked list.
 * @head: pointer to pointer of the head.
 * @n:integer.
 * Return: a new node.
 */



listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *s;

	s = malloc(sizeof(listint_t));

	if (s == NULL)
		return (NULL);
	s->n = n;
	s->next = *head;

	*head = s;

	return (s);


}

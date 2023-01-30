#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - fuction that adds a node at the end  of a linked list.
 * @head: pointer to a pointer of the head of the list.
 * @str: pointer to string.
 * Return: the address of the new element, or NULL if it failed.
 */


list_t *add_node_end(list_t **head, const char *str)
{

	list_t *s;
	list_t *current;

	s = malloc(sizeof(list_t));


	if (s == NULL)
	{
		return (NULL);
	}

	s->str = strdup(str);

	s->len = strlen(str);

	s->next = NULL;

	if (*head == NULL)
		*head = s;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = s;
	}
	return (s);

}

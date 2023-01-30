#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that adds a node to a linked list.
 * @head: pointer to pointer of the head.
 * @str: pointer to a string.
 * Return: pointer of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *s;

	s = malloc(sizeof(list_t));

	if (s == NULL)
		return (NULL);

	s->str = strdup(str);

	if (s->str == NULL)
	{
		free(s);
		return (NULL);
	}
	s->len = strlen(str);
	s->next = *head;

	*head = s;
	return (s);

}

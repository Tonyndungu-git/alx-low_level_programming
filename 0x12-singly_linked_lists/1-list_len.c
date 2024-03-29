#include "lists.h"
#include <stddef.h>


/**
 * list_len - prints length of the list i.e its nodes or elements.
 * @h: pointer to the head of the list.
 * Return: number of nodes iin the list.
 */



size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

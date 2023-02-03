#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - function that givees the lenth of the linked list.
 * @h: a pointer to a struct.
 * Return: size of linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

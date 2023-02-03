#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function that prints elements in a linked list.
 * @h: a pointer to a struct.
 * Return: size of linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->n == 0)
		{
			return (-1);
		}
		else
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}
	return (count);
}

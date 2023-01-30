#include "lists.h"
#include <stdio.h>
#include <stddef.h>


/**
 * print_list - prints contents of a linked list.
 * @h: pointer to the head of the list.
 * Return: number of nodes iin the list.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
			h = h->next;
			count++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
	}
	return (count);
}


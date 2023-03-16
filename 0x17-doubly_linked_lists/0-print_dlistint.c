#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_dlistint-prints no of itms in a list.
 * @h: pointer to a list.
 * Return: size_t.
 */

size_t print_dlistint(const dlistint_t *h)
{

	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;


	}

	return (count);
}

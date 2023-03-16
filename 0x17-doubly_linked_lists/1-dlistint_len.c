#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - length of a list.
 * @h: pointer to a list.
 * Return: size_t.
 */

size_t dlistint_len(const dlistint_t *h)
{

	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;


	}

	return (count);
}

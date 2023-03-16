#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>



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

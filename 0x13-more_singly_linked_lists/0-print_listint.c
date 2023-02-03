#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


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
	h->next;
	return (count);
}

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}

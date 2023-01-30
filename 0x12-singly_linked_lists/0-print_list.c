#include "lists.h"
#include <stdio.h>
#include <stddef.h>

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;
	while (current)
	{
		printf("[%u] %s\n", current->len, current->str ? current->str : "(nil)");
		current = current->next;
		count++;
	}
	return count;
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}

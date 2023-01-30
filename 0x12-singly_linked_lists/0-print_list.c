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
	const list_t *current = h;

	while (current)
	{
		printf("[%u] %s\n", current->len, current->str ? current->str : "(nil)");
		current = current->next;
		count++;
	}
	return (count);
}

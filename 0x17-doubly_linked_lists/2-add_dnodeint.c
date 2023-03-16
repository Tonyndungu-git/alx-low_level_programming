#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the list.
 * @n: The integer to be stored in the new node.
 * Return: The address of the new node, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    if (head == NULL)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->prev = NULL;

    if (*head != NULL)
        (*head)->prev = new_node;

    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

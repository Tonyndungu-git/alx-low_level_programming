#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int i;
	hash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");
	i = 0;
	while (i <= ht->size)
	{
		node = ht->array[i];

		while (node != NULL)
		{

			if (first)
				first = 0;
			else
				first = printf(", ");
			printf("'%s' : '%s'", node->key, node->value);
			node = node->next;
		}

		i++;
	}
	printf("}\n");
	return;

}

#include "hash_tables.h"


void hash_table_delete(hash_table_t *ht)
{

	hash_node_t *node;
	unsigned long int  i;
	hash_node_t *tmp;

	if (ht ==NULL)
		return;


	i = 0;

	while (i <= ht->size)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
	i++;
}

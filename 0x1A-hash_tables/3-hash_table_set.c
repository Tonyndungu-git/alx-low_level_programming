#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table.
 *@ht: creation of a table struct
 *@key: key
 *@value: value
 *Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_n;
	hash_node_t *tmp;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
		return (0);
	new_n->key = strdup(key);
	if (new_n->key == NULL)
	{
		free(new_n);
		return (0);
	}
	new_n->value = strdup(value);
	if (new_n->value == NULL)
	{
		free(new_n->key);
		free(new_n);
		return (0);
	}
	new_n->next = ht->array[index];
	ht->array[index] = new_n;
	return (1);
}

#include "hash_tables.h"

/**
 * key_index - returns index.
 * @key: key value.
 * @size: size of the array
 * Return: inex long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key2;

	key2 = hash_djb2(key);
	return (key2 % size);

}

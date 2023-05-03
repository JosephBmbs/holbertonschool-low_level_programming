#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * key_index - Returns the index of a key in a hash table.
 * @key: The key to look for in the hash table.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored in the array
 *         of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	hash_value = hash_djb2(key);
	return (hash_value % size);
}

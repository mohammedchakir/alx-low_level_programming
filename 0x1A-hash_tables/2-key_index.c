#include "hash_tables.h"

/**
 * key_index - Get the index of a key in the hash table array
 * @key: The key to find the index for
 * @size: The size of the hash table array
 *
 * Return: The index where the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}

#include "hash_tables.h"

/**
 * key_index - get the index at which a key
 * @key: The key to get the index o
 * @size: The size of the array of a hash table
 * return: The index o the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

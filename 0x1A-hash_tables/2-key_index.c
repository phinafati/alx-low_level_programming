#include "hash_tables.h"

/**
 * Key_index - Get the index at which a key/value pair should
 * be stored in array of a hash tablesi.
 * @key: The key to get the index of
 * @size: The size of the array of the hashtable.
 *
 * Return: The index of the key.
 *
 * Description: Uses the djb2 algoritm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
